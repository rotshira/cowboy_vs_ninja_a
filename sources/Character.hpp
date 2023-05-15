#pragma once
#include <stdio.h>
#include <fstream>
#include <cmath>
#include <string>
#include "Point.hpp"



namespace ariel
{
    
class Character
{

public:
int live;
string name;
Point location;

Character();
Character(string name_, Point location_);
Character(Point location_,int live_,string name_);
bool isAlive();
double distance(Character& player);
void hit(int n);
string getName();
Point getLocation();
string print();



};
}