#include <stdio.h>
#include <stdlib.h>

int main() {
        /*
    A) A função free() em linguagem C serve para desalocar um bloco de memória previamente reservado no heap por funções 
    como malloc(), calloc() ou realloc()
    curiosidade: Se você passar NULL para a função free(), ela não faz nada e retorna imediatamente.

    B) O ponteiro continua a existir e guarda o mesmo endereço de memória, mas o conteúdo apontado torna-se inválido. 
    Acessar esse endereço gera comportamento indefinido (o famoso ponteiro selvagem ou dangling pointer). 
    É uma boa prática atribuir NULL ao ponteiro logo após desalocá-lo. Em resumo, passar um endereço de memória que 
    não foi alocado dinamicamente causa erros graves no programa.

    C) ocorre quando você aloca memória dinamicamente, mas esquece de devolvê-la ao sistema operacional quando ela não
    é mais necessária, ou seja para evitar isso precisamos sempre utilizar o free().

    D) Caso o malloc falhe: Retorna o ponteiro NULL.

    E) Aloca um bloco de memória para um número específico de elementos com um tamanho determinado por elemento e, 
    diferente do malloc, inicializa todos os bits desse bloco com zero, além de possuir 2 argumentos ao invés de 1.
    void* calloc(size_t num, size_t size);

    F) Diferença: malloc: Recebe apenas um argumento, que é o tamanho total em bytes que você deseja alocar.
    calloc: Recebe dois argumentos: o número de elementos que você quer armazenar e o tamanho em bytes de cada elemento
    */
}