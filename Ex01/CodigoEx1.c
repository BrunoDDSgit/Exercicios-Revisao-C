#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    printf("a * b / c = %.3f\n", (float)a * b / c);
    /*
        Análise: Aqui o resultado é igual a 0.667, pois: 
        apesar da declaração das variáveis como inteiros(int) há um cast para float
        que transforma o resultado e permite assim o resultado 0.667 ao invés de 0.
    */ 

    printf("a * b %% c + 1 = %d\n", a * b % c + 1);
    /*
        Análise: Aqui o resultado é igual a 3, pois: 
        1x2 = 2, 2 % 3 = 2(aqui é retornado o resto da divisão), 2 + 1 = 3.
    */
    printf("++a * b - c-- = %d\n", ++a * b - c--);
    /*
        Análise: Aqui o resultado é igual a 1, pois: 
        ++aa: faz com que o valor de a seja incrementado, antes de ser usado. então a passa a valer 2.
        2x2 = 4, e 4 - 3 = 1. 
        observação: como c-- o decremento está depois, então o valor de c DURANTE o calculo ainda é 3, e só depois
        de utilizar o valor na expressão que o valor é decrementado, passando o c então a valer 2.
    */
    printf("7 - - b * ++d = %d\n", 7 - - b * ++d);
    /*
        Análise: Aqui o resultado é igual a 17, pois: 
        começando da multiplicação: 2*5(d foi incrementado com ++ antes) = 10
        7 - - 10 = 7 - (-10), então segundo as regras matemáticas: 7+10 = 17.
    */
    printf("a / b / c = %.3f\n", (float)a / b / c);
    /*
        Análise: Aqui o resultado é igual a 0.500, pois:
        Alterações importantes dos exemplos anteriores: a = 2 e c = 2 agora.
        então: 2/2 = 1, e 1/2 = 0.5; 
        aqui também que há o cast para float, que permite o resultado 0.5 ao invés de 0.

    */
    printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);
    /*
        Análisa: Aqui o resultado é igual a 8.600, pois:
        --d é decrementado, então d passa a valer 4 novamente(antes ele tinha sido incrementado, valendo 5).
        2*4 = 8 e 8/5.0 = 1.6 já que há um cast para float na variavel e, e: int/float = float.
        por ultimo 7+1.6 = 8.6.
    */
    printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);
    /*
        Análise: Aqui o resultado é igual a 3, pois:
        2*2 = 4, 4 % -2 = 0(pois pegamos o resto da divisão)
        0 + 2(c que foi decrementado anteriormente) + 1 = 3.
    */
    printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c);
    /*
        Análise: Aqui o resultado é igual a -7.500, pois:
        ++e: e foi incrementado, então passa a valer 6.
        39.0/-6 = -6.5, note que aqui não há cast, porem o valor 39.0 é um float que foi passado diretamente para a expressão.
        por isso o resultado ainda é -6.5 e não -6.
        29%2(c decrementado em contas anteriores) = 1(resto da divisão).
        por fim: -6.5 - (+1) = -7.5.


    */
    printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));
    /*
        Análise: Aqui o resultado é igual a 4, pois:
        ++a: a foi incrementado, então passa a valer 3.
        3+2 = 5

        3%5 = 3(resto da divisão)
        7 - (+3) = 4.
    */
    return 0;

    /*
        Observação final: Note que em alguns resultados foi utilizado %.3f 
        e por isso são mostrados 3 casas decimais em resultados do tipo float.
    */
}