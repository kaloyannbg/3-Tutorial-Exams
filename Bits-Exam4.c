/*4) Създайте функция setBit. Тя получава следните
параметри - число и индекс. Функцията трябва да "вдига"
бита на съответния индекс в числото (под "вдига" ще
разбираме да му присвои стойност 1).*/

#include <stdio.h>

int setBit(int number, int indexOfBit);

int main() {

    printf("%d", setBit(10, 0)); // 1010 will be 1011

    return 0;
}

int setBit(int number, int indexOfBit) {

    number |= 1UL << indexOfBit;


}
