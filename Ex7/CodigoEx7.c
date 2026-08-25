#include <stdio.h>
#include <stdlib.h>

int main() {
    // EXPLICANDO A DIFERENÇA ENTRE OS MODOS DE ABERTURA DE ARQUIVOS

    FILE *arq;
    arq = fopen("arquivo.txt", "w"); // abre o arquivo para escrita, se não existir cria um novo, se existir apaga o conteúdo anterior.
    fclose(arq);
    arq = fopen("arquivo.txt", "r"); // abre o arquivo APENAS para leitura, se não existir retorna NULL
    fclose(arq);
    arq = fopen("arquivo.txt", "a"); // abre o arquivo para escrita, se não existir cria um novo, se existir adiciona ao final do arquivo.
    fclose(arq);

    fgets() // lê uma linha do arquivo e armazena em uma string, até encontrar o caractere de nova linha ou EOF.
    // recebe três argumentos: a string onde será armazenada a linha lida(char* str), o tamanho máximo da string(int) 
    // e o ponteiro para o arquivo(FILE* file).

    fprintf() // escreve uma string no arquivo, até encontrar o caractere de nova linha ou EOF.
    // recebe dois argumentos: o ponteiro para o arquivo(FILE* file) e a string a ser escrita(char* str). 
    // pode conter argumentos de formatação/adicionais como printf().

    
    // a partir daqui pesquisei resumidamente pois nunca tinha visto essas funções. 
    // São funções de leitura e escrita de arquivos BINÁRIOS e por isso difere das funções acima que são para arquivos de texto.

    fread() // lê um bloco de bytes do arquivo e armazena em uma variável, até encontrar o caractere de nova linha ou EOF.
    fwrite() // escreve um bloco de bytes no arquivo, até encontrar o caractere de nova linha ou EOF.
}