#include <stdio.h>
#include <stdlib.h>

int main() {
    // A) EXPLICANDO O VETOR EM C

    int numeros[5] = {5,8,11,24,1};
    /* 
        Acima estamos declarando um vetor de inteiros, um vetor nada mais é do que uma estrutura de dados homogenea, 
        ou seja, que armazena dados do mesmo tipo, no caso utilizado foi utilizado int.

        Como ele é tratado? Um vetor em C de forma sequencial na memória, ou seja, o primeiro elemento do vetor é armazenado
        em uma posição de memória e o próximo elemento é armazenado na próxima posição de memória, e assim por diante. pode-se
        dizer então q é quase que um ponteiro que aponta para o primeiro elemento armazenado, e assim podemos acessar os outros
        elementos do vetor, utilizando o operador de indexação [] ou até mesmo somando a memória. 

        ex: numeros[0] é o mesmo que *(numeros + 0), numeros[1] é o mesmo que *(numeros + 1) e assim por diante. onde o numero inteiro somado
        com o ponteiro é multiplicado pelo tamanho do tipo de dado, no caso int que ocupa 4 bytes na memória, então *(numeros + 1) é o mesmo que
        *(numeros + 4), ou seja, ele vai pular 4 bytes na memória para acessar o próximo elemento do vetor.
    */

    for (int i = 0; i < 5; i++) {
       printf("%d esta localizado na posicao %d e na memoria %p\n", numeros[i], i, &numeros[i]);
    }

    /*
        Aqui criei um exemplo pra mostrar a forma sequencial de armazenamento do vetor na memória, é importante saber aqui que:
        cada int ocupa 4 bytes na memória, então a diferença de endereço entre cada elemento do vetor é de 4 bytes.

    */ 

    // B) EXPLICANDO A STRING EM C

    char* nome = "Lucas";
    // ou
    char nome2[] = "Lucas";

    printf("O nome eh: %s\n", nome2);

    /* 
        note que: não há o tipo string em C, o que temos é um vetor de char, ou seja, um vetor de caracteres, 
        e como todo vetor em C, ele é tratado como um ponteiro para o primeiro elemento do vetor assim como explicado anteriormente.
        aqui cada caractere char ocupa 1 byte na memória, então a diferença de endereço entre cada elemento do vetor é de 1 byte.
        em resumo então uma string nada mais é do que um vetor de char.

        Ponto importante: como o C identifica o final de uma string?
        o C utiliza o caractere nulo '\0' para identificar o final de uma string, ou seja, quando o C encontra esse caractere ele 
        sabe que a string acabou. então toda string tera este caractere no final, e por isso as vezes alocamos um byte a mais para
        armazenar o caractere nulo. por exemplo, se queremos armazenar uma string de 5 caracteres, então precisamos alocar 6 bytes, 
        5 para os caracteres e 1 para o caractere nulo.
    */

}