#include <stdio.h>

int main() {

    double dDouble = 4.9876543;
    double lDouble = 7.123456789012345678890; //cut our symbols after digit: 5
     long double lDoubleTwo =  18398458438583853.28;
     long double dllDouble = 18398458438583853.39875937284928422;

    printf("%.7f\n", dDouble);
    printf("%.20f\n", lDouble);
    printf("%lE\n", lDoubleTwo);
    printf("%llf\n", dllDouble);

    return 0;
}
