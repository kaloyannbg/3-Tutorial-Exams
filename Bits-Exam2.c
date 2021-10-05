/*
Създайте функция bitAt. Функцията получава
параметър число и индекс. Тя връща стойността на бита
на съответния индекс
*/

#include <stdio.h>

int bitAt(int number, int indexOfBit);

int main() {

    printf("%d", bitAt(14,2)); // 2 = 0010 , 1 = 0001

    return 0;
}

int bitAt(int number, int indexOfBit) {
   return ((number>>indexOfBit) & 1); // return 1
}

/*
    1110 = number 14 >> bit 2 = 1 - 0011 & 0001 = 1
    after bit operation:
    0011
   &
    0001 =
    0001
*/
