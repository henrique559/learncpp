#include <cassert>
#include <cctype>
#include <ios>
#include <iostream>
#include <limits>
#include <random>
#include "highlower.h"

namespace hl 
{
    int rand_num ()
    {

        std::mt19937 randNumber { std::random_device{}() };
        std::uniform_int_distribution<> generator { hl::min_guess, hl::max_guess };
        int guess = { generator(randNumber) };

        return guess; 
    }

    int high_lower()
    {
        
        while(true)
        { 
            int tries { 1 };
            int guess { hl::rand_num() };
            bool game_continue {};
            std::cout << "Let's play a game. I'm thinking of a number between " << hl::min_guess << " and " << hl::max_guess << " \n";
            
            while(tries <= hl::max_tries)
            {
                std::cout << "Guess " << tries << "#: ";
                int user_prompt { hl::user_prompt()};
                
                if(hl::gaming_check(user_prompt, guess, tries) == false)
                    return 0;
                
                
                ++tries;
            }
    
        }
    }
    
    void ignore_line()
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    int user_prompt()
    {
        int num { };
        while(true)
        {
            std::cin >> num;
            
            if(!std::cin)
            {

                assert(std::isdigit(num) == false && "ERRO: Não é possível enviar letras.");
                if(std::cin.eof())
                {
                    exit(0);
                }
                std::cin.clear();
                hl::ignore_line(); 
                
                continue;
            }
            else 
            {
                return num;
            }
        }
    }
    bool gaming_check(int user_prompt, int guess, int tries)
    {
    
        bool answer { };
        
                if(user_prompt == guess)
                {
                    std::cout << "Correct! You win!\n";
                    answer = hl::try_again();
                    if(!answer)
                    {
                        std::cout << "Thank you for playing! \n";
                        return false;
                    }
                    else
                        return true;
                }

                if(tries == hl::max_tries)
                {    
                    std::cout << "Sorry, you lose. The correct number was " << guess << '\n';
                    answer = hl::try_again();
                    if(!answer)
                    {
                        std::cout << "Thank you for playing! \n";
                        return false;
                    }
                    else 
                        return true;
                }
    
                if(user_prompt > guess)
                    std::cout << "Your guess is to high\n";

                if(user_prompt < guess)
                    std::cout << "Your guess is too low\n";
                
                return true;
    }

    bool try_again()
    {
        char answer {};
        while(true)
        {

            std::cout << "Would you like to play again (y/n)? ";
            std::cin >> answer;
                        
            answer = static_cast<char>(std::tolower(answer));

            if(answer == 'y')
                return true;
            else if(answer == 'n')
                return false; 
        }
    }
}
