#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2;
    int qtdAulas, faltas;
    void obterDados(float *n1, float *n2, int *qtdAulas, int *faltas);
    char* calcularResultado(float n1, float n2, int qtdAulas, int faltas);

    obterDados(&n1, &n2, &qtdAulas, &faltas);
    char* resultado = calcularResultado(n1, n2, qtdAulas, faltas);
    printf("\nResultado: %s\n", resultado);
    return 0;
}

void obterDados(float *n1, float *n2, int *qtdAulas, int *faltas) {
    printf("\nDigite a primeira nota: ");
    scanf("%f", n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", n2);
    printf("\nDigite a quantidade de aulas: ");
    scanf("%d", qtdAulas);
    printf("\nDigite a quantidade de faltas: ");
    scanf("%d", faltas);
}

char* calcularResultado(float n1, float n2, int qtdAulas, int faltas) {
    if(n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || qtdAulas <= 0 || faltas < 0 || faltas > qtdAulas) {
        return "Erro: Valores invalidos.";
    }

    float media = (n1 + n2) / 2;
    float frequencia = (float)(qtdAulas - faltas) / qtdAulas * 100;
    printf("\nMedia: %.2f\n", media);
    printf("Frequencia: %.2f%%\n", frequencia);
    if(media >= 7 && frequencia >= 75) {
        return "Aprovado";
    } else if(media < 7 && frequencia < 75) {
        return "Reprovado por nota e frequencia";
    } else if(media < 7) {
        return "Reprovado por nota";
    } else {
        return "Reprovado por frequencia";
    }
}