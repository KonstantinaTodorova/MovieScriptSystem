#include "Character.h"


Character::Character(char* name)
{
    setName(name);

}

Character::Character()
{
    name = NULL;
}

Character::~Character()
{
    delete[] this->name ;
}
Character& Character::operator=(const Character& other)
{
    if(this != &other)
    {
        delete[] this->name;
        this->name = new char[strlen(other.name) + 1];
        strcpy(name,other.name);
    }

    return *this;
}


char* Character::getName() const
{
    return name;
}
/*bool Character::getIsGood() const
{
    return isGood;
}
bool Character::getIsInRelation() const
{
    return isInRelation;
}
*/
void Character::setName(char* name)
{
    delete[] name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}
/*
void Character::setIsGood(bool isGood)
{
    this->isGood = isGood;
}
void Character::setIsInRelation(bool isInRelation)
{
    this->isInRelation = isInRelation;
}
*/
istream& operator>>(istream& input ,Character& obj)
{
    input >> obj.sizeName;
         for (int i = 0; i < obj.sizeName; i++)

          {
             input >> obj.name[i];
          }
return input;
}
