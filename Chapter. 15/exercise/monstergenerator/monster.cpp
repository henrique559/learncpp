#include <iostream>
#include <string>
#include <string_view>
#include "random.h"

namespace PocketMonster
{
    class Monster 
    {
        public:

            enum Type
            {
                dragon,
                globin,
                ogre,
                orc,
                skeleton,
                troll,
                vampire,
                zombie,
                max_monster_types,
            };

            Monster(Monster::Type type, std::string_view name, std::string_view roar, int hitPoints)
                : m_type { type }
                , m_name { name }
                , m_roar { roar }
                , m_hitPoints { hitPoints }
                { }
            
            const Type& getMonster(const Monster& monster) const { return monster.m_type; }
                    
            constexpr static std::string_view getTypeString(const Type& monster) 
            {
                switch(monster)
                {
                    case Type::dragon:      return {"Dragon"};
                    case Type::globin:      return {"Globin"};
                    case Type::ogre:        return {"Ogre"};
                    case Type::orc:         return {"Orc"};
                    case Type::skeleton:    return {"Skeleton"};
                    case Type::troll:       return {"Troll"};
                    case Type::vampire:     return {"Vampire"};
                    case Type::zombie:      return {"Zombie"};

                    default:                return {"???"};
                }
            }
            
            void print()
            {
                m_hitPoints >= 1 ? std::cout << m_name << " the " << getTypeString(m_type) << " has " << m_hitPoints << " hit points and says " << m_roar << ".\n"  
                : std::cout << m_name << " the " << getTypeString(m_type) << " is dead.\n"; 
            }

        private:
            Type m_type {};
            std::string m_name {"???"};
            std::string m_roar {"???"};
            int m_hitPoints {};
    };

}

namespace MonsterGenerator 
{
    using namespace PocketMonster;

    std::string_view getRoar(int n)
    {
    switch (n)
        {
            case 0:  return "*ROAR*";
            case 1:  return "*peep*";
            case 2:  return "*squeal*";
            case 3:  return "*whine*";
            case 4:  return "*growl*";
            case 5:  return "*burp*";
            default: return "???";
        }
    }

    Monster generate()
    {
        using namespace PocketMonster;
        
        return Monster
        { static_cast<Monster::Type>(Random::get(0, 7))
        , Random::nameGen(Random::get(2, 10))
        , MonsterGenerator::getRoar(Random::get(0,5)) 
        , Random::get(10,1000) };
    }
}

int main()
{
    using namespace PocketMonster;

	Monster m{ MonsterGenerator::generate() };
	m.print();


	return 0;
}
