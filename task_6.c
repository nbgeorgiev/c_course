#include <stdio.h>
#include <stdbool.h>
#define size 7

void printDay (int n)
{
    switch (n)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3: 
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default: 
        printf("Wrong day input!\n");
        break;
    }
}

int main()
{
    float price [size] ={1.2,2.3,10.5,7.8,8.9,9.8,5.6};
    float maxPrice = price [0];
    int indexMax = 0;
    
    for (int i=1; i<size; i++)
    {
        if (price[i]>maxPrice)
        {
            maxPrice = price[i];
            indexMax = i;
        }
    }
printDay(indexMax);

return 0;
}

