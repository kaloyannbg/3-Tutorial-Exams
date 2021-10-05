/*
Създайте С програма, която калкулира стойността на покупки в магазин за
хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В
магазина има следните налични продукти и цени:
Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой.
*/
#include <stdio.h>

int main() {

    float fTomatoesPricePerKilo = 4.5;
    float fFlourPricePerKilo = 1.80;
    float fCandiesPricePerKilo = 1.50;

    float fYogurtPricePerOne = 0.50;
    float fIceCreamPricePerOne = 0.60;
    float fLollipopsPricePerOne = 0.15;

    float fWeight = 0;
    int fPieces = 0;

    int iChoiceProduct = 0; //Product ID

    float totalAmount = 0;

    float totalAmountOfAllProducts = 0;

    char cContinue[20];

    cContinue[0] = 'y';

    do {

    printf(" -- Welcome to our magazine.\n");
    printf("Enter 1 for buy tomatoes, 1kilo = %.2f\n", fTomatoesPricePerKilo);
    printf("Enter 2 for buy flour, 1kilo = %.2f\n", fFlourPricePerKilo);
    printf("Enter 3 for buy candies, 1kilo = %.2f\n", fCandiesPricePerKilo);

    printf("Enter 4 for buy Yogurt, 1piece = %.2f\n", fYogurtPricePerOne);
    printf("Enter 5 for buy iceCream, 1piece = %.2f\n", fIceCreamPricePerOne);
    printf("Enter 6 for buy Lollipops, 1piece = %.2f\n", fLollipopsPricePerOne);

    printf("Please enter your product ID: ");

    scanf("%d", &iChoiceProduct);

    if(iChoiceProduct > 0 && iChoiceProduct < 4) { // from 1 to 3
        printf(" -- Enter weight: ");
        scanf("%f", &fWeight);
        switch (iChoiceProduct)
        {
        case 1: totalAmount = fWeight * fTomatoesPricePerKilo;
        break;
        case 2: totalAmount = fWeight * fFlourPricePerKilo;
        break;
        case 3: totalAmount = fWeight * fCandiesPricePerKilo;
        default:
        break;
        }
    } else if (iChoiceProduct > 3 && iChoiceProduct < 7) { // from 3 to 6
        printf(" -- Enter pieces: ");
        scanf("%d", &fPieces);
        switch (iChoiceProduct)
        {
        case 4: totalAmount = fPieces * fYogurtPricePerOne;
         break;
        case 5: totalAmount = fPieces * fIceCreamPricePerOne;
        break;
        case 6: totalAmount = fPieces * fLollipopsPricePerOne;
        default:
        break;
        }
    }
    else {
        printf(" -- Invalid product ID\n");
    }

    totalAmountOfAllProducts = totalAmountOfAllProducts + totalAmount;
    printf(" -- Total amount of these products: %.2f\n", totalAmount);
    printf(" -- Total amount of all products: %.2f\n", totalAmountOfAllProducts);
    printf(" -- Do you want to buy more products? [y/n]: ");
    scanf("%s", &cContinue);
} while (cContinue[0] == 'y');


    return 0;
}
