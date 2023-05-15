#include "Character.hpp"
#include "Team.hpp"


// using namespace ariel;
using namespace std;
namespace ariel
{
//constructor
Team::Team()
{
    this->leader = Character();
}

Team::Team(Character* lead)
{
// this->leader = lead;
}

void Team::add(Character* enemy)
{
;
}
void Team::attack(const Team *enemy)
{
;
}

int Team::stillAlive()
{
return 0;
}

void Team::print()
{
;
}

Team::~Team()
{

}



}
