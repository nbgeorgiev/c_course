#include <stdio.h>

int numCount (int n)
{
    int initialCount = 0;
    while(n>0)
    {
        n=n/10;
        initialCount++;
    }
    return initialCount;
}

int main ()
{

    int number;
    printf("Please input number:\n");
    scanf("%d", &number); 

    printf("Number of digits in the inputed number:\n%d", numCount(number));
    
    return 0;
}
