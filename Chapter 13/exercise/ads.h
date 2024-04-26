#ifndef ADS_H
#define ADS_H

struct Advertising
{
    int ads_watched {};
    double percentage_click {};
    double average_earnings {};
};

void printAds (const Advertising& ads);
Advertising getAds();
#endif // !DEBUG
