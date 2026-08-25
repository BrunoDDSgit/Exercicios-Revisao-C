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
        Conclusão: a saída sempre será 0, isso por que a lógica do programa está incorreta,
        pois o certo seria fazer a divisão de um número maior por um menor, e não o contrário, 
        como está no código, resultando assim sempre em 0 mesmo após a conversão para float. 
        o correto então seria:

        if(a > b || !(a > 0)) {
            c = (float)(a / b);
        } else {
            c = (float)(b / a);
        }
     */
}