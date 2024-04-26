#include <iostream>
#include <string>
#include <string_view>

class Ball
{
    std::string m_color {};
    double m_radius {};

    public:
        //Inicialização default
        Ball(double radius)
            : Ball { "black", radius }
            { }
        // Inicialização de uma variavel usando o construtor completo
        Ball(std::string_view color="black", double radius= 10.0) 
            : m_color { color }
            , m_radius { radius }
            { }

        const std::string& color() const { return m_color; } 
        const double& radius() const { return m_radius; }
};

void print(const Ball& obj)
{
    std::cout << "Ball(" << obj.color() <<", " << obj.radius() << ")\n";
}

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    print(def);
    print(blue);
    print(twenty);
    print(blueTwenty);
}
