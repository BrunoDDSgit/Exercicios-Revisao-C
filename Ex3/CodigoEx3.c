#include <stdio.h>

int main() {
    int a = 5;
    int b = 11;
    float c;

    scanf("%d %d", &a, &b);

    if(a > b || !(a > 0)) {
        c = (float)(b / a); 
    } else {
        c = (float)(a / b);
    }
    printf("%.2f\n", c);
    return 0;

    /*
        Conclusão: 

        a saída sempre será 0, isso por que a lógica do programa está incorreta, pois a
        conversão para float é feita após a divisão, e como a divisão de dois inteiros 
        é sempre um inteiro, o resultado da divisão será 0, e só depois será convertido para float.

        Mesmo que este ponto acima fosse concertado, a divisão nunca daria um resultado maior que 1,
        ficando sempre 0.xxxx, isso por que a divisão está sempre sendo feita com o número menor 
        sendo dividido pelo maior.

     */
}