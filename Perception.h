#pragma once


class Perception
{
    public:
        Perception(int, int);
        Perception();

        int getHateValue() const;
        int getAttractValue() const;

        void setHateValue(int);
        void setAttractValue(int);
    protected:
        int hateValue;
        int attractValue;
};
