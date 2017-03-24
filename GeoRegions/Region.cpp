//
// Created by Stephen Clyde on 3/4/17.
//

#include "Region.h"
#include "Utils.h"
#include "World.h"
#include "Nation.h"
#include "State.h"
#include "County.h"
#include "City.h"

#include <iomanip>
#include <iostream>

const std::string regionDelimiter = "^^^";
const int TAB_SIZE = 4;
unsigned int Region::m_nextId = 0;
std::vector<Region*> Region::m_regions;
int Region::m_lowestDeleted=-1;

unsigned int Region::getOffset(unsigned int id){
    unsigned int difference;
    if(Region::m_lowestDeleted){
        if(id<m_lowestDeleted){
            difference=0;
        }
        else {
            unsigned int highest = Region::m_nextId;
            difference = highest - Region::m_regions.size();
        }
    }
    else {
        difference=0;
    }
    return difference;
}

Region* Region::create(std::istream &in)
{
    Region* region = nullptr;
    std::string line;
    std::getline(in, line);
    if (line!="")
    {
        region = create(line);
        if (region!= nullptr)
            region->loadChildren(in);
    }
    return region;
}
Region* Region::create(const std::string& data)
{
    Region* region = nullptr;
    std::string regionData;
    unsigned long commaPos = (int) data.find(",");
    if (commaPos != std::string::npos)
    {
        std::string regionTypeStr = data.substr(0,commaPos);
        regionData = data.substr(commaPos+1);

        bool isValid;
        RegionType regionType = (RegionType) convertStringToInt(regionTypeStr, &isValid);

        if (isValid)
        {
            region = create(regionType, regionData);
        }

    }

    return region;
}

Region* Region::create(RegionType regionType, const std::string& data)
{
    Region* region = nullptr;
    std::string fields[3];
    if (split(data, ',', fields, 3)) {

        // Create the region based on type
        switch (regionType) {
            case WorldType:
                region = new World();
                break;
            case NationType:
                region = new Nation(fields);
                break;
            case StateType:
                region = new State(fields);
                break;
            case CountyType:
                region = new County(fields);
                break;
            case CityType:
                region = new City(fields);
                break;
            default:
                break;
        }
        m_regions.push_back(region);
        // If the region isn't valid, get ride of it
        if (region != nullptr && !region->getIsValid()) {
            delete region;
            region = nullptr;
        }
    }

    return region;
}

std::string Region::regionLabel(RegionType regionType)
{
    std::string label = "Unknown";
    switch (regionType)
    {
        case Region::WorldType:
            label = "World";
            break;
        case Region::NationType:
            label = "Nation";
            break;
        case Region::StateType:
            label = "State";
            break;
        case Region::CountyType:
            label = "County";
            break;
        case Region::CityType:
            label = "City";
            break;
        default:
            break;
    }
    return label;
}

Region::Region() { }

Region::Region(RegionType type, const std::string data[]) :
        m_id(getNextId()), m_regionType(type), m_isValid(true)
{
    m_name = data[0];
    m_population = convertStringToUnsignedInt(data[1], &m_isValid);
    if (m_isValid)
        m_area = convertStringToDouble(data[2], &m_isValid);
}

Region::~Region()
{
    for(Region* sub : m_subregions){  //flag, not sure if this is right
        sub=nullptr;
        delete sub;
    }
    for(Region* region: m_regions){
        region=nullptr;
        delete region;
    }
}

std::string Region::getRegionLabel() const
{
    return regionLabel(getType());
}

unsigned int Region::computeTotalPopulation()
{
    unsigned int totalPop=m_population; //flag, not sure if this is right
    for(Region* sub : m_subregions){
        totalPop+=sub->m_population;
    }
    return totalPop;
}

void Region::list(std::ostream& out)
{
    out << std::endl;
    out << getName() << ":" << std::endl;
    //for()
    // foreach subregion, print out
    //      id    name
    for(Region* sub : m_subregions){  //flag
        out<<sub->getId()<<": "<<sub->getName()<<std::endl;
    }
}

void Region::display(std::ostream& out, unsigned int displayLevel, bool showChild)
{
    if (displayLevel>0)
    {
        out << std::setw(displayLevel * TAB_SIZE) << " ";
    }

    unsigned totalPopulation = computeTotalPopulation();
    double area = getArea();
    double density = (double) totalPopulation / area;


    out << std::setw(6) << getId() << "  "
        << getName() << ", population="
        << totalPopulation
        << ", area=" << area
        << ", density=" << density << std::endl;

    if (showChild)
    {
        // foreach subregion
        //      display that subregion at displayLevel+1 with the same showChild value
        for(Region* sub : m_subregions){  //flag
            sub->display(out, displayLevel+1, showChild);
        }
    }
}

void Region::save(std::ostream& out)
{
    out << getType()
        << "," << getName()
        << "," << getPopulation()
        << "," << getArea()
        << std::endl;

    // foreach subregion,
    //      save that region
    for(Region* sub: m_subregions){  //flag
        sub->save(out);
    }
    out << regionDelimiter << std::endl;
}

void Region::validate()
{
    m_isValid = (m_area!=UnknownRegionType && m_name!="" && m_area>=0);
}

void Region::loadChildren(std::istream& in)
{
    std::string line;
    bool done = false;
    while (!in.eof() && !done)
    {
        std::getline(in, line);
        if (line==regionDelimiter)
        {
            done = true;
        }
        else
        {
            Region* child = create(line);
            if (child!= nullptr)
            {
                m_subregions.push_back(child);  //flag
                child->m_parent=this;  //flag
                child->loadChildren(in);
            }
        }
    }
}

unsigned int Region::getNextId()
{
    if (m_nextId==UINT32_MAX)
        m_nextId=1;

    return m_nextId++;
}

void Region::deleteRegion(Region* region, unsigned int id){
    if(region->m_parent){
        Region* parent=region->m_parent;
        int index=0;
        bool found=false;
        while(!found && index<parent->getSubCount()){
            if(region->getName()==parent->m_subregions[index]->getName()){
                found=true;
            }
            else {
                index++;
            }
        }
        if(Region::m_lowestDeleted==-1 || parent->m_subregions[index]->getId()<Region::m_lowestDeleted){
            Region::m_lowestDeleted=parent->m_subregions[index]->getId();
        }
        parent->m_subregions.erase(parent->m_subregions.begin() +index);
    }

    for(int i=0;i<region->getSubCount();i++){
        if(Region::m_lowestDeleted==-1 || region->m_subregions[i]->getId()<Region::m_lowestDeleted){
            Region::m_lowestDeleted=region->m_subregions[i]->getId();
        }
        region->m_subregions.erase(region->m_subregions.begin() + i);
    }
    Region::m_regions.erase(Region::m_regions.begin() + id);
    delete region;
}
