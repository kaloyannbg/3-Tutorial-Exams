/*Направете побитовите операции върху целите числа 3 и 5 в main().
Покажете резултата с функцията printf(“%d”, res);*/

#include <stdio.h>

int main() {

    int a, b;

    a = 3, b = 5;

    printf("%d\n%d\n%d", a & b, a | b, a ^ b);

    return 0;
}
