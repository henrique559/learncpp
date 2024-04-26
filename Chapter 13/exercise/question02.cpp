#include <iostream>
#include "ads.h"


int main()
{
    Advertising ads { getAds() };    
    
    std::cout << '\n';
    printAds(ads);
}

