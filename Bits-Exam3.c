/*3) Създайте функция clearBit. Тя получава като
параметър число и индекс, и прави на нула бита на
съответния индекс в числото.*/

#include <stdio.h>

int clearBit(int number, int indexOfBit);

int main() {

    printf("%d", clearBit(15, 0)); // 15 = 1111 ; 1111 = clear bit 0 = 14 is 1110

    return 0;
}

int clearBit(int number, int indexOfBit) {

  return number &= ~(1UL << indexOfBit);

}


