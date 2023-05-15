#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

#include "Team.hpp"

#include "Ninja.hpp"
#include "YoungNinja.hpp"

using namespace std;
namespace ariel
{
//constructor
YoungNinja::YoungNinja(string name_, Point p) : Ninja(name_,p) {
    this->speed = 14;
    this->live = 100;
}

}