/* 5) Създайте функция reverseBit. Тя получава следните
параметри - число и индекс. Като резултат функцията
обръща бита на съответната позиция в числото
(съответно от 0 на 1 или от 1 на 0). */

#include <stdio.h>

int reverseBit(int number, int indexOfBit);

int main() {

    printf("%d", reverseBit(10, 0)); // 1010 will be 1011

    return 0;
}

int reverseBit(int number, int indexOfBit) {
    return number ^= 1UL << indexOfBit;
}
