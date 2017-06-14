#include <iostream>
#include "Character.h"
#include "Episode.h"
#include "Event.h"
#include "Series.h"
using namespace std;

int main()
{
    cout << "Please choose the names of your character's names : " << endl;
    Character a;
    a.setName(" Stefan ");

    cout << "The male character: " << a.getName() << endl;


    Character b;
    b.setName(" Elizabeth");

    cout << "The female character: " << b.getName() << endl;

    cout << " Your characters are called: " << a.getName() << "and" << b.getName() << endl;
    cout << endl;
    cout << endl;

    Episode first;
    first.setEpisodeNumber(1);
    first.setEpisodeDuration(30);
    first.addCharacter(a);
    first.addCharacter(b);
    cout << "Episode number " << first.getEpisodeNumber() << " ." << endl;
    cout << "Episode is " << first.getEpisodeDuration() << " minutes long."<< endl;
    cout << endl;
    cout << endl;

    cout << " One day they met at a coffee shop." << a.getName() << " liked " << b.getName()
    << " instantly and introduced himself to her : " << endl;
    cout << " Hi, I'm  " << a.getName() << " What's your name?" << endl;
    cout << " Hey, my name is " << b.getName() << "."<< endl;
    cout << a.getName() << "added: " << " It's very nice to meet you!" << b.getName() << endl;
    cout << b.getName() << " said: " << " Nice to meet you to!" << endl;
    cout << a.getName() << " and " << b.getName() << " talked for hours. They really liked each other. " << endl;

    first.simulateEpisode(); // Please enter attraction = 100 and hatred = 0 for both characters.

    cout << "That was the end of episode 1!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    Character c;
    c.setName("Alison");

    Episode second;
    second.setEpisodeNumber(2);
    second.setEpisodeDuration(30);
    second.addCharacter(a);
    second.addCharacter(b);
    cout << "Episode number " << second.getEpisodeNumber() << " ." << endl;
    cout << "Episode is " << second.getEpisodeDuration() << " minutes long."<< endl;
    cout << endl;
    cout << endl;

    cout << " " << a.getName() << " and " << b.getName() << " had really great couple of months together." << endl;
    cout << "  They were so happy. " << endl;

    second.addCharacter(c);

    cout << " But then one day, when " << a.getName() << " was going to work, " << endl;
    cout<< " he bumped into his old friend from high school " << c.getName() << " ." << endl;
    cout << " They had fun the whole day. " << a.getName() << " forgot about " << b.getName() << " ." << endl;

    second.simulateEpisode(); //Please enter in series 100,100 ,0,0 ;

    cout << "That was the end of episode 2!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    Episode third;
    third.setEpisodeNumber(3);
    third.setEpisodeDuration(30);
    third.addCharacter(a);
    third.addCharacter(b);
    third.addCharacter(c);
    cout << "Episode number " << third.getEpisodeNumber() << " ." << endl;
    cout << "Episode is " << third.getEpisodeDuration() << " minutes long."<< endl;
    cout << endl;
    cout << endl;

    cout << a.getName() << " and " << c.getName() << " went on a date together." << endl;
    cout << a.getName() << " was not attracted to his girlfriend " << b.getName() << " anymore." << endl;

    third.simulateEpisode(); // Please enter in series 55,100 ,45, 0 ;

    cout << "That was the end of episode 3!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    Episode forth;
    forth.setEpisodeNumber(4);
    forth.setEpisodeDuration(45);
    forth.addCharacter(a);
    forth.addCharacter(b);
    forth.addCharacter(c);
    cout << "Episode number " << forth.getEpisodeNumber() << " ." << endl;
    cout << "Episode is " << forth.getEpisodeDuration() << " minutes long."<< endl;
    cout << endl;
    cout << endl;

    cout << a.getName() << " cheated on " << b.getName() << " with " << c.getName() << " .";
    cout << b.getName() << " caught them in bed." << " She was devastated." << endl;

    forth.simulateEpisode(); // Please enter in series 40,100 ,45, 60;
    cout << endl;
    cout << a.getName() << " and " << b.getName() << " fought for hours." << endl;

    cout << endl;
    cout << "That was the end of episode 4!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    Episode fifth;
    fifth.setEpisodeNumber(4);
    fifth.setEpisodeDuration(45);
    fifth.addCharacter(a);
    fifth.addCharacter(b);
    cout << "Episode number " << fifth.getEpisodeNumber() << " ." << endl;
    cout << "Episode is " << fifth.getEpisodeDuration() << " minutes long."<< endl;
    cout << endl;
    cout << endl;

    cout << b.getName() << " was so angry with " << a.getName() << " . ";
    cout << "The feeling of them both started changing." << endl;

    fifth.simulateEpisode(); //Please enter in series 55,55 ,55, 100;

    cout << endl;
    cout << "There he was " << a.getName() << " lying dead on the ground." << endl;
    cout << endl;

    cout << "That was the end of episode 5!" << endl;
    cout << endl;
    cout << endl;

    Series drama;
    drama.endSeries();


    return 0;
}
