#include <iostream>
#include <string_view>
#include <vector>

namespace Game
{

    enum Items
    {
        health_potions,
        torches,
        arrows,
        max_items,
    };

    void getTotalItems(const std::vector<int>& items)
    {
        int sum {};
        for(const auto& i : items)
            sum += i;
        
        std::cout << "You have " << sum << " total items\n";
    }


    constexpr std::string_view getItemName(Game::Items items)
    {
        switch(items)
        {
            case Items::health_potions:     return "health potion(s)";
            case Items::torches:            return "torch(es)";
            case Items::arrows:             return "arrow(s)";

            default:    return "???";
        }
    }

    void getEachItem(const std::vector<int>& items, Game::Items types)
    {
        int index{};
        for(const auto& i : items)
            std::cout << "You have " << i << " " << getItemName(types) << '\n';
    }
}



int main()
{
}
