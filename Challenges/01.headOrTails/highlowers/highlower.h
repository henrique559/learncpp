#ifndef HIGH_LOWER_H
#define HIGH_LOWER_H

namespace hl 
{
    constexpr int max_guess { 100 };
    constexpr int min_guess { 1 };
    constexpr int max_tries { 7 };
    
    
    int high_lower(int guess);
    int rand_num ();
    bool try_again();
}
#endif // !HIGH_LOWER_H
