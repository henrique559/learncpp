#include <iostream>
#include <string_view>

enum class Animal
{
  pig,
  chicken,
  goat,
  cat,
  dog,
  duck
};
// quando retornar uma c-string literal usar constexpr std::string_view
constexpr std::string_view getAnimalName(Animal animal)
{
    using enum Animal;

    switch (animal) 
    {
        case pig:       return "pig";
        case chicken:   return "chicken";
        case goat:      return "goat";
        case cat:       return "cat";
        case dog:       return "dog";
        case duck:      return "duck";

        default:        return "???";
    }
}

constexpr int printNumberOfLegs (Animal animal)
{
    using enum Animal;

    switch(animal)
    {
        case pig:
            [[fallthrough]];
        case goat:
        case cat:
        case dog:
            return 4;
    
        case duck:
            [[fallthrough]];
        case chicken:
            return 2;
        
        default: return 0;
    }
}

int main()
{
    Animal meow { static_cast<Animal>(3) };
    std::cout << "A " << getAnimalName(meow) << " has " << printNumberOfLegs(meow) << " legs.\n"; 
    Animal quack { static_cast<Animal>(5) };
    std::cout << "A " << getAnimalName(quack) << " has " << printNumberOfLegs(quack) << " legs.\n"; 

    return 0;
}
