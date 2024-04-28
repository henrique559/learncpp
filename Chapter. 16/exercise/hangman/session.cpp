#include "namelist.h"
#include <cctype>
#include <exception>
#include <limits>
#include <vector>
#include <array>
#include "class.h"


void Session::clean()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.clear();
}

void Session::updateScore() { ++wrong_try; }

std::string_view Session::getName ()
{
    return (WordList::names[Random::get(0, WordList::listLength)]);
}
  
// Vai transformar o nome aleatório em "underscores"
std::string Session::getUnderscores(std::string_view name)
{ 
    std::string underscores{};
    for(const auto& i : name)
        underscores += '_';

    return underscores;
}
// Vai receber o input do usuário e lidar com inputs errados, como simbolos e bugs
char Session::getUserLetter()
{
    char user_input{};
    while(!std::cin.eof())
    {
        //TODO: Arrumar bug do CTRL+D
        try 
        {
            std::cout << "Enter your next letter: ";
            std::cin >> user_input;
 
            // Esse pedaço do código verifica que o input do usuário está correto, se sim, irá retornar o valor, se não, vai emitir uma exception ,limpar o buff e tentar novamente
            if(!std::cin || ispunct(user_input) || isdigit(user_input))
            {
                clean();
                throw std::exception();
            }
            else if(Session::checkRecentWords(user_input))
            {
                clean();
                throw user_input;
            }
            else 
            {
                clean();
                return user_input;
            }
        } 
        catch (const std::exception& e) 
        {
            std::cerr << "That wasn't a valid input.\t Try again.\n";
            continue;
        }
        catch (char input)
        {
            std::cerr << "You already guessed that.\t Try again.\n";
            continue;
        }
    }
    std::exit(-1);
}

void Session::displayGame()
{
    char user_input {};
    while(!Session::finish_game)
    {

        std::cout << Session::randomName << "\n";
        std::cout << "Welcome to C++man (a variant of Hangman)\n";
        std::cout << "To win: guess the word.  To lose: run out of pluses.\n\n";
        std::cout << "Right tries: " << Session::right_try << "\t Wrong tries: " << Session::wrong_try << '\n';
        Draw();
        std::cout << "The word: " << Session::underscoreName << "\n";
        user_input = getUserLetter();

        if(checkUserInput(user_input))
            ++right_try;
        else 
            ++wrong_try;
        
        finish_game = isGameFinished();
        system("clear");
    }
    
    resetGame();
}

void Session::Draw()
{
    std::array<std::array<char, 3>, 3> matrix {{  // note double braces
    { ' ', ' ', ' '},
    { ' ', ' ', ' '},
    { ' ', ' ', ' '}}};
    
    switch(wrong_try)
    {
        // Cabeça
        case 1:     matrix[0][1] = '0'; break;
        
        // Tronco e braços
        case 2:     
            matrix[0][1] = '0';
            matrix[1][0] = '/';
            break;
        case 3:
            matrix[0][1] = '0';
            matrix[1][0] = '/';
            matrix[1][1] = '|';
            break;
        case 4:
            matrix[0][1] = '0';
            matrix[1][0] = '/';
            matrix[1][1] = '|';
            matrix[1][2] = '\\'; 
            break;
        
        // Pernas
        case 5:     
            matrix[0][1] = '0';
            matrix[1][0] = '/';
            matrix[1][1] = '|';
            matrix[1][2] = '\\'; 
            matrix[2][0] = '/'; 
            break;
        case 6:     
            matrix[0][1] = '0';
            matrix[1][0] = '/';
            matrix[1][1] = '|';
            matrix[1][2] = '\\'; 
            matrix[2][0] = '/'; 
            matrix[2][2] = '\\'; 
            break;
        default:    break;
    }

    std::cout << " ________\n";
    std::cout << "|        \\\n";
    std::cout << "|         " << matrix[0][1] << '\n';
    std::cout << "|        " << matrix[1][0] << matrix[1][1] << matrix[1][2] <<'\n';
    std::cout << "|        " << matrix[2][0] << " " << matrix[2][2] << '\n';
    std::cout << "|______    \n";
}


// Checar se o input do usuário está correta
bool Session::checkUserInput(char user_input)
{
    bool track { false };
    for(int i { 0 }; i < Session::randomName.size(); ++i)
    {
        if(user_input == Session::randomName[i])
        {
            // Adicionar na lista de letras inseridas
            trackRecentWords(user_input);
            // Dar update no nome com underscore
            Session::underscoreName[i] = user_input;
            track = true;
        }
    }
    if(track == false)
        trackRecentWords(user_input);

    return track;
}
        
// Checar se o usuário perdeu ou ganho
bool Session::isGameFinished()
{
    if(checkWords())
    {
        std::cout << "you win! the correct answer is" << Session::randomName << "\n";
        std::cin.get();
        return true;
    }
    
    if(wrong_try == totalTries)
    {
        std::cout << "you lose... the corret answer was " << Session::randomName << "\n";
        std::cin.get();
        return true;
    }

    return false;
}
// Enviar letras recentes inseridas pelo usuario
void Session::trackRecentWords(char user_input)
{
    Session::trackLetters += user_input;
    return;
}
// Checar se o usuário já inseriu tal letra
bool Session::checkRecentWords(char user_input)
{
    for(const auto& i : Session::trackLetters)
    {
        if(user_input == i)
           return true;
    }
    return false;
}

bool Session::checkWords()
{
    bool track { false };
    for(int i { 0 }; i < Session::randomName.size(); i++ )
    {
        if(randomName[i] == underscoreName[i])
            track = true;
        else
            return false;
    }
    return track;
}

void Session::resetGame()
{
    Session::right_try = 0;
    Session::wrong_try = 0;
    Session::randomName = getName();
    Session::underscoreName = getUnderscores(randomName);
}
