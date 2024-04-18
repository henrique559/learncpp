#ifndef BALL_CONST_H
#define BALL_CONST_H 


namespace constants 
{
    constexpr double gravity { 9.8 }; 
}

namespace ball_tower 
{
    double ballSimulator (double height, int seconds);
    void printBallHeights (double height, int seconds);
    double getUserInput();
}


#endif 
