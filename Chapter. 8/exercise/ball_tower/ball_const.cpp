#include <iostream> 
#include "ball_const.h"

namespace ball_tower 
{
    double ballSimulator (double height, int seconds)
    {
        printBallHeights(height, seconds);

        if(height <= 0.0)
            return 0;

        ++seconds;
        return ball_tower::ballSimulator(height - (constants::gravity * (seconds * seconds) / static_cast<double>(2.0)), seconds); 
    }

    void printBallHeights (double height, int seconds)
    {
        if(height <= 0.0)
        {
            std::cout << "At "<< seconds << " seconds, the ball is on the ground\n";
            return;
        }
        else
        {
            std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
            return;
        }
    }

    double getUserInput()
    {
        std::cout << "Enter the height of the tower in meters: ";
        double height {};
        std::cin >> height;

        return height;
    }

}

