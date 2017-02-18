//
// Created by Stephen Clyde on 2/3/17.
//

#include "EdgeTester.h"

#include <iostream>
#include <cmath>
#include "../Point.h"
#include "../Edge.h"

void EdgeTester::testEdge01()
{
    std::cout << "Execute EdgeTester::testEdge01" << std::endl;

    Point p0(0,0,0);
    Point p1(1,0,0);

    // Create and test an edge between p0 and p1, then test all characteristics of that edge
    Edge e(&p0, &p1);
    if (!e.isValid() || e.getPoint1() != &p0 || e.getPoint2()!= &p1)
    {
        std::cout << "Failure in constructing Edge(&p1, &p2) isValid()="
                  << e.isValid()
                  << " point1=" << e.getPoint1() << " (expecting " << &p0 << ")"
                  << " point2=" << e.getPoint2() << " (expecting " << &p1 << ")"
                  << std::endl;
        return;
    }

    if (e.getLength()!=1)
    {
        std::cout << "Failure in e.getLenth(), length="
                  << e.getLength() << " (expecting 1)"
                  << std::endl;
        return;
    }

    if (e.getSlopeX()!=INFINITY)
    {
        std::cout << "Failure in e.getSlopeX(), slope="
                  << e.getSlopeX() << " (expecting INFINITY)"
                  << std::endl;
        return;
    }

    if (e.getSlopeY()!=0)
    {
        std::cout << "Failure in e.getSlopeY(), slope="
                  << e.getSlopeY() << " (expecting 0)"
                  << std::endl;
        return;
    }

    if (e.getSlopeZ()!=0)
    {
        std::cout << "Failure in e.getSlopeZ(), slope="
                  << e.getSlopeZ() << " (expecting 0)"
                  << std::endl;
        return;
    }
}

void EdgeTester::testEdge02()
{
    std::cout << "Execute EdgeTester::testEdge02" << std::endl;

    Point p0(1,0,0);
    Point p1(3,4,5);

    // Create and test a edge between p0 and p1, then test all characteristics of that edge
    Edge e(&p0, &p1);
    if (!e.isValid() || e.getPoint1() != &p0 || e.getPoint2()!= &p1)
    {
        std::cout << "Failure in constructing Edge(&p1, &p2) isValid()="
                  << e.isValid()
                  << " point1=" << e.getPoint1() << " (expecting " << &p0 << ")"
                  << " point2=" << e.getPoint2() << " (expecting " << &p1 << ")"
                  << std::endl;
        return;
    }

    if (fabs(e.getLength() - 6.708203932) > 0.001)
    {
        std::cout << "Failure in e.getLenth(), length="
                  << e.getLength() << " (expecting 6.708203932)"
                  << std::endl;
        return;
    }

    if (fabs(e.getSlopeX() - 0.312347524) >= 0.001)
    {
        std::cout << "Failure in e.getSlopeX(), slope="
                  << e.getSlopeX() << " (expecting 0.312347524)"
                  << std::endl;
        return;
    }

    if (fabs(e.getSlopeY() - 0.742781353) >= 0.001)
    {
        std::cout << "Failure in e.getSlopeY(), slope="
                  << e.getSlopeY() << " (expecting 0.742781353)"
                  << std::endl;
        return;
    }

    if (fabs(e.getSlopeZ() - 1.118033989) >= 0.001)
    {
        std::cout << "Failure in e.getSlopeZ(), slope="
                  << e.getSlopeZ() << " (expecting 1.118033989)"
                  << std::endl;
        return;
    }
}

void EdgeTester::testParallelEdges()
{
    std::cout << "Execute EdgeTester::testParallelEdges" << std::endl;

    // TODO: Writing a representative set of test cases for edges that are parallel with other'
    //Test1
    Point p1(0,0,0);
    Point p2(0,1,0);
    Point p3(1,0,0);
    Point p4(1,1,0);
    Edge edge1(&p1, &p2);
    Edge edge2(&p3, &p4);
    if(!edge1.isParallelTo(edge2)){
        std::cout<<"Failure, edge1 and edge2 should be parallel."<<std::endl;
    }
    //Test 2
    Point p5("-.25, -.25, .25");
    Point p6(.5, .5, -.5);
    Point p7(-3, -3, 3);
    Point p8("4, 4, -4");
    Edge edge3(&p5, &p6);
    Edge edge4(&p7, &p8);
    if(!edge3.isParallelTo(edge4)){
        std::cout<<"Failure, edge3 and edge4 should be parallel."<<std::endl;
    }
}

void EdgeTester::testNonParallelEdges()
{
    std::cout << "Execute EdgeTester::testNonParallelEdges" << std::endl;

    // TODO: Writing a representative set of test cases for edges that are not parallel with other
    //Test 1
    Point p1(1,2,-3);
    Point p2(.2,3,4);
    Point p3(.24, -7, 1);
    Point p4(1,-.33, -5);
    Edge edge1(&p1, &p2);
    Edge edge2(&p3, &p4);
    if(edge1.isParallelTo(edge2)){
        std::cout<<"Failure, edge1 and edge2 should not be parallel."<<std::endl;
    }
    //Test 2
    Point p5("1,2,3");
    Point p6(1,.6,3);
    Point p7(1,2,-11);
    Point p8("3.12,2,3");
    Edge edge3(&p5, &p6);
    Edge edge4(&p7, &p8);
    if(edge3.isParallelTo(edge4)){
        std::cout<<"Failure, edge3 and edge4 should not be parallel."<<std::endl;
    }
}

void EdgeTester::testNonLengthEdges()
{
    std::cout << "Execute EdgeTester::testNonLengthEdges" << std::endl;

    // TODO: Writing a representative set of test cases for edges have a length of zero or approximately zero
    //Test 1
    Point p1(0,0,0);
    Point p2(.0001, .0001, .0001);
    //Test 2
    Point p3("1,1,1");
    Point p4("1.000000001, 1.00000001, 1.000000001");
    Edge edge1(&p1, &p2);
    Edge edge2(&p3, &p4);
    if(edge1.getLength()<=.0001){
        std::cout<<"Failure. edge1 length should be .0001732. edge1 length="
                 <<edge1.getLength()<<std::endl;
    }
    if(edge2.getLength()>=.0001){
        std::cout<<"Failure, edge2 length is approximately 0. edge2 length="
                <<edge2.getLength()<<std::endl;
    }
}

void EdgeTester::testBadEdges()
{
    std::cout << "Execute EdgeTester::testBadEdges" << std::endl;

    // TODO: Writing a representative set of test cases for edges not formed correctly
    //Test 1
    Point p1(1,2,-3);
    Point p2("s,3,4");
    //Test 2
    Point p3(.24, -.7, 1);
    Point p4("1,-.3A, --.15");
    Edge edge1(&p1, &p2);
    if(edge1.isValid()){
        std::cout<<"Failure, constructed edge1"<<std::endl;
    }
    Edge edge2(&p3, &p4);
    if(edge2.isValid()){
        std::cout<<"Failure, constructed edge2"<<std::endl;
    }

}
