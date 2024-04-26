#include <iostream>
#include <string_view>

enum class Color
{
    black,
    red,
    blue,
};

constexpr std::string_view getColor(Color color)
{
    using enum Color; // similar a using namespace [nome];

    switch(color)
    {
        case black: return "black";
        case red: return "red";
        case blue: return "blue";
        default: return "???";
    }
}
