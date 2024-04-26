#include <iostream>
#include <string>
#include <string_view>


struct Monsters
{
    enum Type 
    {
        ogre,
        dragon,
        slime,
        orc,
        giant_spider,
    };

    std::string_view name {};
    Type type {};
    int life {};
    
};


constexpr std::string_view getMonsterType(Monsters::Type type)
{
    using enum Monsters::Type;

    switch(type)
    {
        case ogre:      return "Ogre";
        case dragon:    return "Dragon";
        case slime:     return "Slime";
        case orc:       return "Orc";
        case giant_spider:   return "Giant Spider";
        
    }
    
    return "unkown";
        

}

void printMonster(const Monsters& monster)
{
    std::cout << "This " << getMonsterType(monster.type) << " is named " << monster.name << " and has " << monster.life << " health\n";
}

int main()
{
    Monsters ogre {"Torg", Monsters::Type::ogre, 145};
    Monsters slime {"Blurp", Monsters::Type::slime, 23 };

    printMonster(ogre);
    printMonster(slime);
    
    return 0;
}
