# Estrutura de um programa simples

## Dissecando o Hello-World
```c++
#include <iostream>

int main()
{
        std::cout << "Hello, World";
        return 0;
}
```

- Linha 1: Biblioteca padrão de input e output.
- Linha 3: Função principal `main`.
- Linha 4 e 7: Chaves para delimitar o escopo da função;
- Linha 5: Função `std::cout` que significa "Character Output" que tem como propósito printar strings (palavras) na tela, o operador << significa `output`.
- Linha 6: Finaliza o programa, retornar 0 significa "Finalizado com sucesso".

### Quiz time 01


- Q01) Um "Statement" é uma instrução que diz o computador realizar alguma ação.
- Q02) Uma "Função" é um bloco de código que performa uma tarefa especifica, no qual foi definida pelo usuário ou por alguma biblioteca.
- Q03) Todo programa deve ter a função principal "int main(void)"
- Q04) O programa sempre começa na função Main
- Q05) Todo comando termina com um ';'
- Q06) Um erro de síntaxe é quando você viola alguma regra de escrita daquela linguagem de programação em especifica, um exemplo comum é esquecer de colocar o ';' no final de um comando.

## Comentários

Comentários no C++ podem ser feitos utilizando o símbolo '//' para comentários de apenas uma linha, ou utilizar '/* */' para comentários de 2 ou mais linhas, onde o texto irá ficar no meio das duas linhas.

Comentários tem 3 propósitos:
- Explicar oque o código faz (Ex: Essa função calcula a raiz quadrada de um número)
- Explicar COMO esse código funciona.
- Explicar PORQUE esse código está fazendo aquilo

Não menos importante, gostaria de acrescentar duas coisas que acabam me ajudando ao resolver problemas:
- Usar comentários para planejar o código para resolver tal problema (AJUDA MUITO!!!!)
- Assumir que quem está lendo o seu código não ENTENDE nada, portanto, fazer códigos mais explicados e códigos explicitos

## Variáveis

Variáveis são dados que podem ser manipulados, escritos ou deletados por vários meios, como input/output do usuário, colocado no código source sendo declarado pelo programador, via rede etc... no fim, todas essas variáveis são armazenadas em algo que chamamos de RAM (Random Access Memory), que podemos imaginar como uma "caixa" com varias partes que guarda todos os valores do programa, todos esses valores na caixa tem o seu endereço (onde ela vive), um nome utilizado para identificar esse endereço e o próprio valor da variável.

Regras de nomeação de uma variável
- Deve ser clara e objetiva e condizer com aquilo que vai realizar.
- Não pode começar com números
- Não pode ter nenhum espaço ou caracteres que não seja o '_'

Declaração de uma variável:
```c++
int x; // pode adicionar um valor adicionando o operador '=' (lê-se recebe) + um valor que condiz com aquele tipo.
```

Inicialização/Atribuição de uma variável:

Atribuição normal:
```c++
int x = 10; //sendo esse valor qualquer um que condiz com o tipo inteiro, ou seja, apenas números inteiros..
```

Atribuição direta
```c++
int x(10); // Não muito utilizado;
```

Atribuição em lista (Mais utilizado)
```c++
int x { 5 } // Atribuição direta;
int x = { 5 } // Atribuição utilizando cópia
int x {} // Atribui o 0 
```

utilizar o atributo "[[maybe_unused]]" para variaveis que possivelmente não serão utilizadas

Tipos de variáveis:
- `int`: tipo de números inteiros (ex: -2, -1, 0, 1, 2).
- `double e float`: tipo de números flutuantes (ou seja, contém '.'| ex: 1.5, 00.2, 10000.324);
- `char`: tipo de caracteres (Armazena apenas uma letra ou simbolo utilizando aspas simples)
- `string`: tipo de palavras (Armazena palavras e frases utilizando aspas duplas)
- `bool`: tipo booleano (Armazena dois valores: true or false (verdadeiro e falso))

### Quiz Time 

- Q01) "Data" é um tipo de valor (número ou caractere) que pode ser inserido pelo usuario ou colocado no source code, que na hora da compilação esse valor vai ser armazenado na memória ram do computador.
- Q02) "Valor" é qualquer coisa que pode ser armazenado na memória do computador, sendo ela números, letras, palavras, simbolos, tipos booleanos (true or false) etc...
- Q03) "Variavel" é um tipo de dado que pode ser armazenado na memória do computador, como o nome próprio diz, uma "Variavel" pode ser manipulada pelo usuario ou programador, podendo modificar, escrever, ler ou deletar esse valor.
- Q04) "Identificador" é o nome que damos à uma variável para que ela consiga ser identificada no nosso código 
- Q05) "Tipo" é algo utilizado para definir oque aquela variável pode interpretar e o espaço dela alocado na memória ram, por exemplo, um tipo "char" pode somente usar letras ou simbolos e usar 1 byte de espaço, já um double pode usar somente números (de preferencia com pontos flutuantes) e consegue utilizar 8 bytes na memória ram.
- Q06) "Tipo inteiro" é um tipo de variável que consegue guardar apenas números inteiros (sem virgulas) e tem um espaço finito de memoria (normalmente 4 bytes em computadores com arquiteturas recentes)
- Q07) "Inicialização" inicializa a variavel com um valor no momento em que ela é criada, já a atribuição é após a variável ser criada.
- Q08) A inicialização em lista é a mais preferível, de acordo com o autor da linguagem c++
- Q09) A inicialização "default" ocorre quando a variavel não recebe nenhum valor na declaração em lista, então é colocado o número 0.


## iostream library

O "iostream" é uma biblioteca da linguagem C++ que nos permite usar funções de input e output, ou seja, colocar algo na tela ou pegar dados do teclado apartir do usuário, segue aqui uma das funções mais utilizadas:
- `std::cout`: utilizado junto com o caractere "<<", é possível printar palavras, letras números ou variáveis na tela, o caractere "<<" pode ser utilizado mais vezes para concatenar mais valores.
- `std::endl`: utilizado igualmente o caractere "\n", ele pula uma linha no texto.
- `std::cin`: utilizado junto com o caractere ">>", é possível pegar um input do usuário e armazenar em uma ou mais variáveis, o caractere ">>" pode ser utilizado mais vezes para atribuir mais valores a outras variaveis.

## Operators 

- `+ - * / %`: operadores aritméticos
- `=`: atribuição 
- `<< >>`: operadores de input/out (insertion/extraction) respectivamente
- `< > <= >= == !=`: operadores relacionais
- `&& || !`: operadores lógicos (AND, OR e NOT) respectivamente

## Expressions
