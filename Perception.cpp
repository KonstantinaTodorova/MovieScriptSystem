#include "Perception.h"

Perception::Perception(int hateValue, int attractValue)
{
    setHateValue(hateValue);
    setAttractValue(attractValue);
}
Perception::Perception()
{
    hateValue = 0;
    attractValue = 0;
}
int Perception::getHateValue() const
{
     return this->hateValue;
}
int Perception::getAttractValue() const
{
    return this->attractValue;
}
void Perception::setHateValue(int hateValue)
{
    this->hateValue = hateValue;
}
void Perception::setAttractValue(int attractValue)
{
    this->attractValue = attractValue;
}
