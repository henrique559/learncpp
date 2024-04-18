#ifndef HIGH_LOWER_H
#define HIGH_LOWER_H

#include <string_view>

namespace hl 
{
    constexpr int max_guess { 100 };
    constexpr int min_guess { 1 };
    constexpr int max_tries { 7 };
    
    void ignore_line();
    int user_prompt();
    bool gaming_check(int user_prompt, int guess, int tries);
    int high_lower();
    int rand_num ();
    bool try_again();
}
#endif // !HIGH_LOWER_H
