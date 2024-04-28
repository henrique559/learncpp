#ifndef NAMELIST_H
#define NAMELIST_H

#include "random.h"
#include <string_view>
#include <vector>

namespace WordList
{
    using namespace std::literals;
    inline std::vector<std::string_view> names {"mystery"sv, "broccoli"sv, "account"sv,"almost"sv, "spaghetti"sv, "opinion"sv, "beautiful"sv, "distance"sv, "luggage"sv};
    
    const int listLength { static_cast<int>(names.size() - 1) };
}
 

#endif

