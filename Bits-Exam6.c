/*
6) Променете стойността на бита на дадено число на
определена позиция.
*/

#include<stdio.h>
int main()
{

    int number = 10; //1010
    int x = 1;
    int n = 0;
    printf("%d", number ^= (-x ^ number) & (1UL << n)); // print 11 = 1011
  
    return 0;
}
