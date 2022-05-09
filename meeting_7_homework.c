#include <stdio.h>

int main()

{
    int selection_training;
    printf("Please select the type of exercise you want to complete:\n 1. Strength\n 2. Endurance\n 3. Tonus\n");
    scanf("%i", &selection_training);

    if (selection_training == 1) {
        printf("Strength - Do the exercises with the maximum weight you are capable of and 6 repetitions!\n");
    }
    else if (selection_training == 2) {
        printf("Endurance - Do the exercises with a light weight of 5-10 kg and 20 repetitions!\n");
    }
    else if (selection_training == 3) {
        printf("Tonus - Do exercises with moderate weight up to 20 kg and 15 repetitions!\n");
    }
    else {
        printf("Invalid selection! Please enter slection from 1 to 3!\n");
    }
    return 0;
}