#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno* prox;
}aluno_t;

int main() {
    int qtdAulas;
    printf("Digite a quantidade de aulas: ");
    scanf("%d", &qtdAulas);

    aluno_t* gerarAluno();
    char* calcularResultado(aluno_t* aluno, int qtdAulas);
    void imprimirAluno(aluno_t* aluno, char* resultado);
    void adicionarAlunoLista(aluno_t** aluno_root);
    void imprimirLista(aluno_t* aluno_root, int qtdAulas);

    aluno_t* primeiroAluno = gerarAluno();
    aluno_t *aluno_root = primeiroAluno;
    adicionarAlunoLista(&aluno_root);
    adicionarAlunoLista(&aluno_root);

    // OU
    // aluno_root = NULL;
    // aluno_t PrimeiroAlunoS = adicionarAlunoLista(aluno_root);

    imprimirLista(aluno_root, qtdAulas);

}

aluno_t* gerarAluno() {
    aluno_t* aluno = (aluno_t*)malloc(sizeof(aluno_t));
    if (aluno == NULL) {
        printf("Erro ao alocar memória para o aluno.\n");
        return NULL;
    }

    system("cls");
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", aluno->nome);
    getchar(); 
    
    printf("Digite o numero de faltas do aluno: ");
    scanf("%d", &aluno->faltas);
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);

    aluno->prox = NULL;
    
    return aluno;
}

void adicionarAlunoLista(aluno_t** aluno_root) {
    aluno_t* novo_aluno = gerarAluno();
    if(novo_aluno == NULL) {
        printf("Erro ao alocar memória para o aluno.\n");
        return;
    }

    if(*aluno_root == NULL) {
        *aluno_root = novo_aluno;
        return;
    } else {
        aluno_t* aux = *aluno_root;
        while(aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo_aluno;
    }
}

char* calcularResultado(aluno_t* aluno, int qtdAulas) {

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

void imprimirLista(aluno_t* aluno_root, int qtdAulas) {
    system("cls");
    aluno_t* aux = aluno_root;
    int i = 1;
    while(aux != NULL) {
        printf("===============================================\n");
        printf("Aluno da lista numero: %d\n", i);
        
        char* resultado = calcularResultado(aux, qtdAulas);
        imprimirAluno(aux, resultado);
        aux = aux->prox;
        i++;
    }
}