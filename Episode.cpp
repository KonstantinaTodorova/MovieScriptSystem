#include "Episode.h"


Episode::Episode(int episodeNumber, int episodeDuration, Character* characterList, Event event)
{
    setEpisodeNumber(episodeNumber);
    setEpisodeDuration(episodeDuration);
    setCharacterList(characterList);
    setEvent(event);

}
Episode::Episode()
{
    episodeNumber = 0;
    episodeDuration = 0;
    characterCount =0;
    characterCapacity = 5;
    characterList = new Character[characterCapacity];
}

Episode::~Episode()
{
    delete[] this->characterList;
}

void Episode::simulateEpisode()
{
    int temp1; // percent of attraction from male character to the female character
    std::cout << "Attraction value male to female character: " ;
    std::cin >> temp1 ;
    event.setAttractValue(temp1);
    event.printEventAttract();
    int temp2; // percent of attraction from female character to the male character
    std::cout << "Attraction value female to male character: " ;
    std::cin >> temp2 ;
    event.setAttractValue(temp2);
    event.printEventAttract();
    int temp3; // the male character's percent of hatred toward the female character:
    std::cout << "Hatred percent male toward female character: ";
    std::cin >> temp3 ;
    event.setHateValue(temp3);
    event.printEventHate();
    int temp4; // the female character's percent of hatred toward the male character:
    std::cout << "Hatred percent female toward male character: ";
    std::cin >> temp4 ;
    event.setHateValue(temp4);
    event.printEventHate();

}

int Episode::getEpisodeNumber() const
{
    return episodeNumber;
}
int Episode::getEpisodeDuration() const
{
    return episodeDuration;
}
Character* Episode::getCharacterList() const
{
    return characterList;
}
Event Episode::getEvent() const
{
    return event;
}
void Episode::setEpisodeNumber(int episodeNumber)
{
     this->episodeNumber = episodeNumber;
}
void Episode::setEpisodeDuration(int episodeDuration)
{
     this->episodeDuration = episodeDuration;
}
void Episode::setCharacterList(Character* characterList)
{
     if(characterCount > 0) {
        if(characterCount > this->characterCapacity) {
            delete[] this->characterList;
            this->characterCapacity = 2 * characterCount;
            this->characterList = new Character[this->characterCapacity];
        }

        for (int i = 0; i < characterCount; ++i) {
            this->characterList[i] = characterList[i];
        }
        this->characterCount = characterCount;
    }
}
void Episode::setEvent(Event event)
{
    this->event = event;
}
void Episode::addCharacter(Character& obj)
{
    characterList[characterCount] = obj;
    characterCount++;

}

istream& operator>>(istream& input ,Episode& obj)
{
   input>>obj.event;
   input>>obj.characterCapacity;
   input>>obj.characterCount;
   for(int i = 0;i < obj.characterCapacity; i++)
   {
       input >>obj.characterList[i];
   }
   input>>obj.episodeNumber;
   input>>obj.episodeDuration;

    return input;
}
