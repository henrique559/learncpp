#ifndef CLASS_H
#define CLASS_H

#include "namelist.h"
#include <iostream>
#include <string_view>

class Session
{
    // Checa a quantidade de tentativas certas  
    int right_try{};

    // Checa a quantidade de tentativas erradas;
    int wrong_try{};

    // checar se o jogo está finalizado
    bool finish_game{};    

    //Quantidade de erros
    static constexpr int totalTries{ 7 }; 

    // Vai receber um nome aleatório do "namelist.h"
    std::string_view randomName{ Session::getName() };
    
    std::string underscoreName { Session::getUnderscores(randomName) };
    std::string trackLetters {};
   
        // limpa buffer
        void clean();

        // realiza o update de ambos os scores    
        void updateScore();

        // Vai selecionar um nome aleatório de uma lista 
        std::string_view getName ();
 
        // Vai transformar o nome aleatório em "underscores"
        std::string getUnderscores(std::string_view name);

        // Vai receber o input do usuário e lidar com inputs errados, como simbolos e bugs
        char getUserLetter();
            
        // Desenha o bonequinho, a cada tentativa errada, o bonequinho vai se formando...
        void Draw();

        // Checar se o input do usuário está correta
        bool checkUserInput(char user_input);
        
        // Dar update no nome com underscore
        void updateUnderscore(char user_input);

        // Checar se o usuário perdeu ou ganhou
        bool isGameFinished();
        
        void trackRecentWords(char user_input);
        
        bool checkRecentWords(char user_input);

        void resetGame();

        bool checkWords();

    public:
        // Realiza o display da interface do jogo
        void displayGame();
    };

#endif // !CLASS_H

