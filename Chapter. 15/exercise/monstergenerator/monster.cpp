#include <iostream>
#include <string>
#include <string_view>

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

        explicit Monster(Monster::Type type, std::string_view name, std::string_view roar, int hitPoints)
            : m_type { type }
            , m_name { name }
            , m_roar { roar }
            , m_hitPoints { hitPoints }
            { }
        
        const Type& getMonster(const Monster& monster) const { return monster.m_type; }
        std::string_view getTypeString(const Type& monster) const
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
            m_hitPoints >= 1 ? std::cout << m_name << " the " << getTypeString(m_type) << " has " << m_hitPoints << " and says " << m_roar << ".\n"  
            : std::cout << m_name << " the " << getTypeString(m_type) << " is dead.\n"; 
        }

    private:
        Type m_type {};
        std::string m_name {"???"};
        std::string m_roar {"???"};
        int m_hitPoints {};

     
};

int main()
{
	Monster skeleton{ Monster::skeleton, "Bones", "*rattle*", 4 };
	skeleton.print();

	Monster vampire{ Monster::vampire, "Nibblez", "*hiss*", 0 };
	vampire.print();

	return 0;
}
