#include <stdio.h>

int main() {

    short int iShortInt =  -127;
    unsigned char cChar = 255;
    unsigned int iUnsignedInt = 63498;
    unsigned long int iUnsignedLongInt = 4294967292;
    long long int iULL = -9000000000000775845; // can be signed long long int

    printf("%d\n", iShortInt);
    printf("%d\n", cChar);
    printf("%u\n", iUnsignedInt);
    printf("%lu\n", iUnsignedLongInt);
    printf("%lld\n", iULL);

    return 0;
}
