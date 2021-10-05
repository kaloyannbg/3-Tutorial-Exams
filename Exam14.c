/*
Упражнение 14. Напишете програма, която изчислява броя на секундите в една
година.
*/

#include <stdio.h>

int main() {

    int year = 1;
    const int days = 365;
    const int hours = 24;
    const int minutes = 60;
    const int seconds = 60;
    int totalSeconds = 0;

    totalSeconds = year * days * hours * minutes * seconds;

    printf("%d year in seconds is %d", year, totalSeconds);



    return 0;
}
