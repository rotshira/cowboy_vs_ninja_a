#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include<limits>
#include <vector>
#include "Point.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"



using namespace ariel;
using namespace std;
namespace ariel
{

//constructor
Character::Character()
{
this->location=Point();
this->live = true;
this->name = "";
}

Character::Character(string name_, Point location_)
{
this->name = name_;
this->location = location_;
}

Character::Character(Point location_,int live,string name_)
{
this->location=location_;
this->live = live;
this->name = name_;
}

bool Character::isAlive()
{
return true;
}

double Character::distance(Character &player)
{
return 0;
}

void Character::hit(int n)
{
;
}

string Character::getName()
{
return this->name;
}
Point Character::getLocation()
{
return this->location;
}

string Character::print()
{
return "";
}


}