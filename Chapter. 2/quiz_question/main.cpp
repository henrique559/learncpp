#include "io.h"
//~$ g++ source1.cpp source2.cpp source3.cpp -o main -Wall
int main (void)
{
    int x { readNumber() };
    int y { readNumber() };

    writeAnswer(x+y);
    return 0;
}



