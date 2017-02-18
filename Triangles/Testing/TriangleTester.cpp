//
// Created by Stephen Clyde on 2/3/17.
//

#include "TriangleTester.h"

#include <iostream>
#include <cmath>

#include "../Triangle.h"
#include "../Utils.h"

void TriangleTester::testFirstConstructor()
{
    std::cout << "Execute TriangleTester::testConstructorWithStrings" << std::endl;

    Point** points = new Point*[3];
    points[0] = new Point(1,2,8);
    points[1] = new Point(3,1,4);
    points[2] = new Point(6,4,3);

    Triangle t(points);
    if (!t.isValid())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly invalid" << std::endl;
        return;
    }

    if (!t.isTriangle())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly not a triangle" << std::endl;
        return;
    }

    if (t.getTriangleType()!='S')
    {
        std::cout << "Triangle: unexpected type of "
                 << t.getTriangleType() << std::endl;
        return;
    }

    if (!approximatelyEquals(t.computerArea(), 9.35414, 0.001))
    {
        std::cout << "Triangle: unexpected area of "
                 << t.computerArea() << std::endl;
        return;
    }

    const Point* p = t.getPoint(0);
    if (p== nullptr)
    {
        std::cout << "Failure to get point 0 from triangle" << std::endl;
        return;
    }

    if (p->getX()!=1 || p->getY()!=2 || p->getZ()!=8)
    {
        std::cout << "Point 0 of triangle is not as expected, namely (1,2,8)" << std::endl;
        return;
    }

    p = t.getPoint(1);
    if (p== nullptr)
    {
        std::cout << "Failure to get point 1 from triangle" << std::endl;
        return;
    }

    if (p->getX()!=3 || p->getY()!=1 || p->getZ()!=4)
    {
        std::cout << "Point 1 of triangle is not as expected, namely (3,1,4)" << std::endl;
        return;
    }

    p = t.getPoint(2);
    if (p== nullptr)
    {
        std::cout << "Failure to get point 1 from triangle" << std::endl;
        return;
    }

    if (p->getX()!=6 || p->getY()!=4 || p->getZ()!=3)
    {
        std::cout << "Point 2 of triangle is not as expected, namely (6,4,3)" << std::endl;
        return;
    }
}

void TriangleTester::testSecondConstructor()
{
    std::cout << "Execute TriangleTester::testSecondConstructor" << std::endl;

    // TODO: Write representative test cases for the Triangle's second constructor
    //Test 1
    std::string triString="1,2,3|.23,-6,1.2|.0005,2,1";
    Triangle stringTri(triString);
    if(!stringTri.isValid()){
        std::cout<<"Failure, should be valid."<<std::endl;
    }
    if(!stringTri.isTriangle()){
        std::cout<<"Failure, should be a triangle."<<std::endl;
    }
    //Test 2
    std::string badTriString="0,0,0|0,0,0|1,2,3";
    Triangle badTri(badTriString);
    if(!badTri.isValid()){
        std::cout<<"Failure, badTri should be valid"<<std::endl;
    }
    if(badTri.isTriangle()){
        std::cout<<"Failure, badTri shouldn't be a triangle"<<std::endl;
    }
}

void TriangleTester::testEquilateralTriangles()
{
    std::cout << "Execute TriangleTester::testEquilateralTriangles" << std::endl;

    std::string triangleStr = "-10,0,0|10,0,0|0,17.32050808,0";
    Triangle t1(triangleStr);
    if (!t1.isValid())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly invalid" << std::endl;
        return;
    }

    if (!t1.isTriangle())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly not a triangle" << std::endl;
        return;
    }

    if (t1.getTriangleType()!='E')
    {
        std::cout << "Triangle: unexpected type of "
                 << t1.getTriangleType() << std::endl;
        return;
    }

    if (!approximatelyEquals(t1.computerArea(), 173.205, 0.001))
    {
        std::cout << "Triangle: unexpected area of "
                 << t1.computerArea() << std::endl;
        return;
    }

    // TODO: Write additional representative test cases equilateral triangles
    //Test 1
    Point** points = new Point*[3];
    points[0] = new Point(5,0,0);
    points[1] = new Point(0,5,0);
    points[2] = new Point(0,0,5);
    Triangle t2(points);
    if(!t2.isValid()){
        std::cout<<"Failure, t2 should be valid"<<std::endl;
    }
    if(!t2.isTriangle()){
        std::cout<<"Failure, t2 should be a triangle"<<std::endl;
    }
    if(!t2.getTriangleType()=='E'){
        std::cout<<"Failure, t2 is unexpected type of"
                 <<t2.getTriangleType()<<std::endl;
    }
    //Test 2
    std::string triString="0,-.000015, 0|-.000015, 0, 0|0,0,-.000015";
    Triangle t3(triString);
    if(t3.isTriangle()){
        std::cout<<"Failure, points are too close, shouldn't be a triangle"<<std::endl;
    }
    if(!t3.computerArea()==0){
        std::cout<<"Failure, area should be 0. t3 area="
                 <<t3.computerArea()<<std::endl;
    }
}

void TriangleTester::testIsoscelesTriangles()
{
    std::cout << "Execute TriangleTester::testIsoscelesTriangles" << std::endl;

    // TODO: Write representative test cases isosceles triangles
    //Test 1
    Point** points = new Point*[3];
    points[0] = new Point(.82,-1,0);
    points[1] = new Point(0,4,0);
    points[2] = new Point(-.82,-1,0);
    Triangle t1(points);
    if(!t1.isValid()){
        std::cout<<"Failure, t1 should be valid"<<std::endl;
    }
    if(!t1.isTriangle()){
        std::cout<<"Failure, t1 should be a triangle"<<std::endl;
    }
    if(t1.getTriangleType()!='I'){
        std::cout<<"Failure, unexpected type. Isosceles t1 type="
                 <<t1.getTriangleType()<<std::endl;
    }


}

void TriangleTester::testScaleneTriangles()
{
    std::cout << "Execute TriangleTester::testScaleneTriangles" << std::endl;

    // TODO: Write representative test cases scalene triangles
    //Test 1
    std::string scaleneString=".11, -.43, 3|-.11, .43, 1|1,4,.24";
    Triangle t1(scaleneString);
    if(!t1.isValid()){
        std::cout<<"Failure, scalene t1 should be valid"<<std::endl;
    }
    if(!t1.isTriangle()){
        std::cout<<"Failure, scalene t1 should be a triangle"<<std::endl;
    }
    if(t1.getTriangleType()!='S'){
        std::cout<<"Failure, unexpected type. Scalene t1 type="
                 <<t1.getTriangleType()<<std::endl;
    }
    //Test 2
    Point** points = new Point*[3];
    points[0] = new Point(14,-1,0);
    points[1] = new Point(-2,4,0);
    points[2] = new Point(-.82,-1,.3256);
    Triangle t2(points);
    if(!t2.isValid()){
        std::cout<<"Failure, scalene t2 should be valid"<<std::endl;
    }
    if(!t2.isTriangle()){
        std::cout<<"Failure, scalene t2 should be a triangle"<<std::endl;
    }
    if(t2.getTriangleType()!='S'){
        std::cout<<"Failure, unexpected type. Scalene t2 type="
                 <<t2.getTriangleType()<<std::endl;
    }
}

void TriangleTester::testNonTriangles()
{
    std::cout << "Execute TriangleTester::testNonTriangles" << std::endl;

    // TODO: Write representative test cases non-triangles triangles
    //Test 1
    std::string badTri="1,2,3|1.000001, 2.0000002, 3.0000003|-1, -2, -3";
    Triangle badt1(badTri);
    if(!badt1.isValid()){
        std::cout<<"Failure, badt1 should be valid"<<std::endl;
    }
    if(badt1.isTriangle()){
        std::cout<<"Failure, badt1 should not be a triangle"<<std::endl;
    }
    //Test 2
    Point** points = new Point*[3];
    points[0] = new Point(0,0,1);
    points[1] = new Point(0,0,2);
    points[2] = new Point(0,0,3);
    Triangle badt2(points);
    if(!badt2.isValid()){
        std::cout<<"Failure, badt2 should be valid"<<std::endl;
    }
    if(badt2.isTriangle()){
        std::cout<<"Failure, badt2 should not be a triangle"<<std::endl;
    }
}

void TriangleTester::testInvalid()
{
    std::cout << "Execute TriangleTester::testInvalid" << std::endl;

    // TODO: Write representative test cases invalid triangles
    //Test 1
    Point** points = new Point*[3];
    points[0] = new Point("aa,b,c");
    points[1] = new Point("--2, m, 1");
    points[2] = new Point("bad, 4,4");
    Triangle invTri(points);
    if(invTri.isValid()){
        std::cout<<"Failure, invTri should not be valid"<<std::endl;
    }
    if(invTri.isTriangle()){
        std::cout<<"Failure, invTri should not be a triangle"<<std::endl;
    }
    //Test 2
    std::string invString="..1, d, 3| 1,2,3| t, 5, -6";
    Triangle invTri2(invString);
    if(invTri2.isValid()){
        std::cout<<"Failure, invTri2 should not be valid"<<std::endl;
    }
    if(invTri2.isTriangle()){
        std::cout<<"Failure, invTri2 should not be a triangle"<<std::endl;
    }
}
