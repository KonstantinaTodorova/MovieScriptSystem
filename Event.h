#pragma once
#include <iostream>
#include "TypeEvent.h"
#include <Perception.h>
using namespace std;

class Event : public Perception
{
    public:
        Event( TypeEvent, int, int);
        Event();

        TypeEvent getTypeEvent() const;


        void setTypeEvent(TypeEvent);

        void printEventAttract();
        void printEventHate();

        friend istream& operator>>(istream& input ,Event& obj);

    private:
        TypeEvent typeEvent;



};


