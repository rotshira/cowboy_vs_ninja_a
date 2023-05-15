#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
// #include <cmath>
#include <string>
#include <vector>
#include "Point.hpp"


using namespace ariel;
using namespace std;
namespace ariel
{
//constructor
Point::Point()
{
    this->x = 0;
    this->y = 0;
}

Point::Point(double x_,double y_)
{
    this->x = x_;
    this->y = y_;
}

double Point::get_x()
{
return this->x;
}

double Point::get_y()
{
return this->y;
}

double Point::distance(Point P)
{
double dx = x - P.x;
double dy = y - P.y;
return sqrt(dx*dx + dy*dy);
}



void Point::print()
{
cout << "(" << x << "," << y << ")" << endl;
}

Point Point::moveTowards(Point p1, Point p2 , double dist)
{
return (Point(0,0));
}
}


