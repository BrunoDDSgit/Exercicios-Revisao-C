#include <stdio.h>

int main() {
    int y = 5;
    int z = 11;
    int w;
    w = y + z; // w = 11+5 = 16

    if (y > z) { // 5 > 11 = falso, então não entramos no if
        w = y * z; 
    }

    printf("%d", w); // w = 16.
    return 0;

    // conclusão: a saída será 16, pois a condição do if não é satisfeita, então o valor de w não é alterado.
}
