#pragma once
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>
#include <cmath>


using namespace std;
namespace ariel
{
class Point
{
private:

 double x;
 double y;

public:
double get_x();
double get_y();
Point(double x_,double y_);
Point();
double distance(Point P);
void print();
Point moveTowards(Point p1, Point p2 , double dist);
};
};