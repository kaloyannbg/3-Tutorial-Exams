#include <stdio.h>

int main() {

    double dDouble = 4.9876543;
    double lDouble = 7.123456789012345678890; //cut our symbols after digit: 5
     long double lDoubleTwo =  18398458438583853.28;
     long double dllDouble = 18398458438583853.39875937284928422;

    printf("%.7f\n", dDouble);
    printf("%.20f\n", lDouble);
    printf("%le\n", lDoubleTwo);
    printf("%.30le\n", dllDouble); // cut after 8

    double prom = 7.1234567890123456789123456789;
    printf("\n normal:%.30lf\n sci:%.30le \n or \n sci:%.30E   \n",prom, prom, prom);
    return 0;
}
