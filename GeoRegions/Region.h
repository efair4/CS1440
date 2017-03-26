//
// Created by Stephen Clyde on 3/4/17.
//

#ifndef GEO_REGIONS_REGION_H
#define GEO_REGIONS_REGION_H

#include <string>
#include <vector>

class Region {
public:
    //Variables
    typedef enum RegionType { UnknownRegionType, WorldType, NationType, StateType, CountyType, CityType } x;
    static std::vector<Region*> m_regions;
    std::vector<Region*> m_subregions;
    Region* m_parent=nullptr;

    //Static functions
    static Region* create(std::istream &in);
    static Region* create(const std::string& data);
    static Region* create(RegionType regionType, const std::string& data);
    static std::string regionLabel(RegionType regionType);
    static unsigned int getMaxId() {return m_nextId;};
    static unsigned int getOffset(unsigned int);
    static bool isDeleted(unsigned int);

    //Destructor
    ~Region();

    //Getters and setters
    unsigned int getId() const { return m_id; }
    RegionType  getType() const { return m_regionType; }
    std::string getRegionLabel() const;
    const std::string& getName() const { return m_name; }
    void setName(const std::string& name) { m_name = name; }
    unsigned int getPopulation() const { return m_population; }
    void setPopulation(unsigned int population) { m_population = population; }
    double getArea() const { return m_area; }
    void setArea(double area) { m_area = area; }
    bool getIsValid() const { return m_isValid; }
    unsigned int getSubCount() const {return m_subregions.size();};
    Region* getSubRegionByIndex(unsigned int index) const {return m_subregions[index];};

    //Other functions
    unsigned int computeTotalPopulation();
    void list(std::ostream& out);
    void display(std::ostream& out, unsigned int displayLevel, bool showChild);
    void save(std::ostream& out);
    void deleteRegion(Region*, unsigned int);

private:
    static unsigned int m_nextId;
    static int m_lowestDeleted;
    static std::vector<int> m_deletedRegions;

protected:
    //Variables
    unsigned int    m_id = 0;
    RegionType      m_regionType = UnknownRegionType;
    std::string     m_name;
    unsigned int    m_population = 0;
    double          m_area = 0;
    bool            m_isValid = false;

    //Constructors
    Region();
    Region(RegionType type, const std::string data[]);

    //Other functions
    virtual void validate();
    void loadChildren(std::istream& in);
    static unsigned int getNextId();
};


#endif //GEO_REGIONS_REGION_H
