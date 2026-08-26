#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
}aluno_t;

int main() {
    aluno_t* gerarAluno();
    char* calcularResultado(aluno_t* aluno);
    void imprimirAluno(aluno_t* aluno, char* resultado);

    aluno_t* aluno = gerarAluno();
    system("cls");
    char* resultado = calcularResultado(aluno);
    imprimirAluno(aluno, resultado);
    free(aluno);

}

aluno_t* gerarAluno() {
    aluno_t* aluno = (aluno_t*)malloc(sizeof(aluno_t));
    if (aluno == NULL) {
        printf("Erro ao alocar memória para o aluno.\n");
        return NULL;
    }

    printf("Digite o nome do aluno: ");
    scanf("%[^'\n']", aluno->nome);
    getchar(); 
    
    printf("Digite o numero de faltas do aluno: ");
    scanf("%d", &aluno->faltas);
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);
    
    return aluno;
}

char* calcularResultado(aluno_t* aluno) {
    int qtdAulas;
    printf("Digite a quantidade de aulas: ");
    scanf("%d", &qtdAulas);

    if(aluno->nota < 0 || aluno->nota > 10 || qtdAulas <= 0 || aluno->faltas < 0 || aluno->faltas > qtdAulas) {
        return "Erro: Valores invalidos.";
    }
    float frequencia = (float)(qtdAulas - aluno->faltas) / qtdAulas * 100;
    printf("Frequencia: %.2f%%\n", frequencia);
    if(aluno->nota >= 7 && frequencia >= 75) {
        return "Aprovado";
    } else if(aluno->nota < 7 && frequencia < 75) {
        return "Reprovado por nota e frequencia";
    } else if(aluno->nota < 7) {
        return "Reprovado por nota";
    } else {
        return "Reprovado por frequencia";
    }
}

void imprimirAluno(aluno_t* aluno, char* resultado) {
    printf("Nome: %s\nFaltas: %d\nNota: %.2f\n", aluno->nome, aluno->faltas, aluno->nota);
    printf("Resultado: %s\n", resultado);
}