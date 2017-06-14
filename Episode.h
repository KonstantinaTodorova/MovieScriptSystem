#pragma once
#include<cstring>
#include "Event.h"
#include "Character.h"
#include <iostream>
using namespace std;

class Episode
{
    public:
        Episode(int, int, Character*, Event);
        Episode();
        ~Episode();


        void simulateEpisode();

        int getEpisodeNumber() const;
        int getEpisodeDuration() const;
        Character* getCharacterList() const;
        Event getEvent() const;

        void setEpisodeNumber(int);
        void setEpisodeDuration(int);
        void setCharacterList(Character*);
        void setEvent(Event);
        void addCharacter(Character&);

        friend istream& operator>>(istream& input ,Episode& obj);
    private:
        int episodeNumber;
        int episodeDuration;
        Character* characterList;
        int characterCount;
        int characterCapacity;
        Event event;



};

