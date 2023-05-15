#pragma once
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>
#include <cmath>

#include "Character.hpp"


using namespace std;
namespace ariel
{
class Cowboy:public Character
{
private:
int number_b;

public:
Cowboy(string name_,Point p);
void shoot(Character* enemy);
bool  hasboolets();
void reload();

};
}
