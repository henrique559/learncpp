#include <iostream> 
#include <cmath> 

double getUserInput();
double ballSimulator (double height);

double ballSimulator (double height, int seconds)
{
    if(height <= 0.0)
    {
        std::cout << "At "<< seconds << " seconds, the ball is on the ground\n";
        return 0;
    }
    
    std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
    return ballSimulator(height -  (9.8 * pow(seconds, 2) / 2.0), ++seconds ); 
}

double getUserInput()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height {};
    std::cin >> height;
    
    return height;
}

int main()
{
    double height {getUserInput()};
    ballSimulator(height, 0);
    
}
