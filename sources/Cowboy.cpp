#include <stdio.h>
#include <iostream>

#include "Character.hpp"

#include "Cowboy.hpp"

using namespace std;
namespace ariel
{
//constructor
Cowboy::Cowboy(string name_,Point l):Character()
{
this->name=name_;
this->location=l;
}

void Cowboy::shoot(Character*  enemy)
{
;
}

bool  Cowboy::hasboolets()
{
return true;
}

void Cowboy::reload()
{
;
}



}

