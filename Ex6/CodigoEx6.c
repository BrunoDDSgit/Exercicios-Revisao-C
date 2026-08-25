 #include <stdio.h> // funções de entrada e saída de dados

    int main() {
    int i;

    i = 0;

    // while verifica primeiro, depois executa
    while (i < 10) {
        printf("while: %d\n", i);
        i++;
    }
    
    // do executa, depois verifica
    do {
        printf("do: %d\n", i);
        i++;
    } while (i < 10);

    return 0;

    // RESPOSTAS:

    /*
        A) a saída será:
        while: 0
        while: 1
        while: 2
        while: 3
        while: 4
        while: 5
        while: 6
        while: 7
        while: 8
        while: 9
        do: 10 

        B) a diferença entre while e do while é que:
        o while verifica a condição ANTES de executar o bloco de código.
        enquanto o do while verifica APOS executar o bloco de código, sempre executando pelo menos 
        uma vez antes de verificar a condição. por este motivo que o do while imprime o valor 10, 
        mesmo que a condição seja falsa.

        C) Não entendi a pergunta. Acho que o enunciado esta incompleto. 

        D) As diferenças entre o for e o while são:
        for é utilizado quando sabemos exatamente quantas vezes queremos repetir o loop.
        já o while é utilizado quando não sabemos exatamente a quantidade, então utilizamos 
        uma condição a ser satisfeita para determinar quando parar.

        além disso: o for possui a inicialização condição e incremento em uma única linha,
        enquanto o while possui a inicialização e incremento separados do loop.
    */
}