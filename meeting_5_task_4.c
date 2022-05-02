#include <stdio.h>

int main()

{
double variableOne = 4.9876543;
long double variableTwo = 7.123456789012345678890;
long double variableThree = 18398458438583853.28;
long double variableFour = 18398458438583853.39875937284928422;

printf("Variable One: %00.7f\n", variableOne);
printf("Variable Two: %0.19Lf\n", variableTwo);
printf("Variable Three: %0.2Lf\n", variableThree);
printf("Variable Four: %0.18Lf\n", variableFour);

return 0;

}