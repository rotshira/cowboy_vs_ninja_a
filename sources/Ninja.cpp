

#include <stdio.h>
#include <string>
#include <iostream>

#include "Ninja.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel {
    Ninja::Ninja(string name_, Point P) : Character(name_, P) {
        // initialize speed and live
        speed = 0;
        live = 0;
    }

    Ninja::Ninja() : Character() {
        speed = 0;
        live = 0;
    }

    void Ninja::move(Character* enemy) {
        // implementation of move function
        // ...
    }

    void Ninja::slash(Character* enemy) {
        // implementation of slash function
        // ...
    }
}