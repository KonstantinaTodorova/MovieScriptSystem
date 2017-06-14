#include "Series.h"
#include<cstring>

Series::Series(Episode* episodeList)
{
    setEpisodeList(episodeList);
}
Series::Series()
{
    episodeList = NULL;
}

Series::~Series()
{
    delete[] this->episodeList;
}

Episode* Series::getEpisodeList() const
{
    return episodeList;
}

void Series::setEpisodeList(Episode* episodeList)
{
   if(countOfEpisodes > 0) {
        if(countOfEpisodes > this->episodeCapacity) {
            delete[] this->episodeList;
            this->episodeCapacity = 2 * countOfEpisodes;
            this->episodeList = new Episode[this->episodeCapacity];
        }

        for (int i = 0; i < countOfEpisodes; ++i) {
            this->episodeList[i] = episodeList[i];
        }
        this->countOfEpisodes = countOfEpisodes;
    }
}

void Series::endSeries()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "So that was the end of my series." << std::endl;
    std::cout << "Just like most soap operas mine ends with a murder." << std::endl;
}
