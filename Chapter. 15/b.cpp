#include "class.h"

int main()
{
    Simple simple1 { 1 };
    {
        Simple simple2 { 2 };
    }

    return 0;
}
