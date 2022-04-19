#include <stdio.h>

int main()

{
    printf("What is your favourite number?\n");
    int myFavNumber;
    scanf("%i", &myFavNumber); // Number input from user

    printf("Really?! My favourite number is also %i! :)", myFavNumber);
    return 0;
}