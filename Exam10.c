/*
10. Представете си, че имате фирма за отдаване на каравани и кемпери под
наем, за която трябва да разработите софтуер. Вие сте малка фирма и имате
общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден.
Декларирайте променливи за броя на караваните, цената на караваните, броя на
кемперите и цената им. Направете меню, което пита клиента каравана или
кемпер ще иска. Направете променлива, в която да се събират парите, които
клиента дължи на компанията. Принтирайте резултата
*/
#include <stdio.h>

int main() {
    int iTotalCaravan = 3;
    float fCaravanPrice = 90.0;
    int iAvailableCaravan = 3;

    int iTotalCamper = 3;
    float fCamperPrice = 100.0;
    int iAvailableCamper = 3;

    float fDays = 0.0;

    float totalAmount = 0.0;

    int iChoice = 0;

    int rentNum = 0;

    printf(" -- Enter 1 for rent caravan\n");
    printf(" -- Enter 2 for rent camper\n");

    printf(" -- Enter your choice: ");

    scanf("%d", &iChoice);

    if(iChoice == 1) {
        printf("How many caravans would you like to rent: ");
        scanf("%d", &rentNum);
        if(iAvailableCaravan < rentNum) {
            printf("Sorry but we dont have %d avaialable", rentNum);
        }else {
            iAvailableCamper = iAvailableCamper - rentNum;
            printf("How many days would you like for your vacation: ");
            scanf("%f", &fDays);
            totalAmount = fDays * (fCaravanPrice * rentNum);
            printf("You rent %d caravan for %.0f days, price for day per caravan is %.2fBGN\n", rentNum, fDays, fCaravanPrice);
            printf("Total amount to pay is: %.2fBGN", totalAmount);
        }
    } else if(iChoice == 2) {
        printf("How many caravans would you like to rent: ");
        scanf("%d", &rentNum);
        if(iAvailableCamper < rentNum) {
            printf("Sorry but we dont have %d avaialable", rentNum);
        }else {
            printf("How many days would you like for your vacation: ");
            scanf("%f", &fDays);
            totalAmount = fDays * (fCamperPrice * rentNum);
            printf("You rent %d caravan for %.0f days, price per day is %.2fBGN\n", rentNum, fDays, fCamperPrice);
            printf("Total amount to pay is: %.2fBGN", totalAmount);
        }
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}
