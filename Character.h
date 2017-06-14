#pragma once
#include<cstring>
#include<iostream>
using namespace std;

class Character
{
    public:
        Character(char*);
        Character();
        ~Character();
        Character& operator=(const Character& other);

        char* getName() const;

        //bool getIsGood() const;
        //bool getIsInRelation() const;

        void setName(char*);

        //void setIsGood(bool);
        //void setIsInRelation(bool);

        friend istream& operator>>(istream& input ,Character& obj);



    private:

        char* name;
        //bool isGood;
        //bool isInRelation;
        int sizeName;


};



