#include "Event.h"
#include<cstring>


Event::Event(TypeEvent typeEvent, int hateValue, int attractValue): Perception(hateValue, attractValue)
{
    setTypeEvent(typeEvent);
}
Event::Event()
{
   hateValue = 0;
   attractValue = 0;
}
TypeEvent Event::getTypeEvent() const
{
    return typeEvent;
}


void Event::setTypeEvent(TypeEvent)
{
    this->typeEvent = typeEvent;
}
void Event::printEventAttract()
{
    //attraction
    if(attractValue <= 100 && attractValue >= 80)
    {
        typeEvent = static_cast<TypeEvent> (4); // Relationship
        std::cout << typeEvent << std::endl;
    }
    else if(attractValue < 80 && attractValue >= 50 )
    {
        typeEvent = static_cast<TypeEvent> (3); //Disinterest
        std::cout << typeEvent << std::endl;
    }
    else if(attractValue < 50)
    {
        typeEvent = static_cast<TypeEvent> (0); // Cheat
        std::cout << typeEvent << std::endl;
    }
}
void Event::printEventHate()
{
    //hatred
    if(hateValue <= 100 && hateValue >= 75)
    {
        typeEvent = static_cast<TypeEvent> (1);//Murder
        std::cout << typeEvent << std::endl;
    }
    else if(hateValue < 75 && hateValue >= 50)
    {
        typeEvent = static_cast<TypeEvent> (2);//Scandal
        std::cout << typeEvent << std::endl;
    }
    else if(hateValue < 50 && hateValue >= 10 )
    {
        typeEvent = static_cast<TypeEvent> (3);//Disinterest
        std::cout << typeEvent << std::endl;
    }
    else if(hateValue < 10)
    {
        typeEvent = static_cast<TypeEvent> (4); //Relationship
        std::cout << typeEvent << std::endl;
    }

}
istream& operator>>(istream& input ,Event& obj)
{
    int var;
    input>>var;
    obj.typeEvent = static_cast<TypeEvent>  (var);
}
