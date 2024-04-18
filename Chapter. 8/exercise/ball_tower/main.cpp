#include "ball_const.h"
int main()
{
    constexpr int init_seconds { 0 };
    
    double user_input { ball_tower::getUserInput() } ;
    ball_tower::ballSimulator(user_input, init_seconds);  
}
