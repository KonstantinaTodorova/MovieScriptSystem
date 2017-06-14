#pragma once
#include "Episode.h"
#include <iostream>

class Series
{
    public:
        Series(Episode*);
        Series();
        ~Series();


        void endSeries();

        Episode* getEpisodeList() const;

        void setEpisodeList(Episode*);




    private:
        Episode* episodeList;
        int countOfEpisodes;
        int episodeCapacity;

};


