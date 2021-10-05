#include <stdio.h>

int main() {

    unsigned int iInt = 24212;
    int iSignedInt = -1357674; //can be signed too
    unsigned int iIntTwo = 1357674; // can be signed too
    int iSignedIntTwo = -1357674000;
    unsigned int iUnsignedInt = 3657895000;

    printf("%u\n", iInt);
    printf("%d\n", iSignedInt);
    printf("%u\n", iIntTwo);
    printf("%d\n", iSignedIntTwo);
    printf("%u\n", iUnsignedInt);

    return 0;
 }
