#include <cstdint>
#include <iostream>



namespace azr
{

    enum MonsterType
    {
        orc,
        globin,
        troll,
        ogre,
        skeleton,
    };


    enum Color : int
    {
        red,
        green,
        blue,
    };

}

int main (int argc, char *argv[]) 
{

    using namespace azr;

    Color apple { 1 }; // É permitido por causa do Color : int 
    Color shirt { static_cast<Color>(1) }; // conversão de int para Color 
    Color cup { Color::blue }; // pode usar sintaxe de namespaces para evitar colisões em enums
    
    MonsterType monster { troll };

    return 0;
}
