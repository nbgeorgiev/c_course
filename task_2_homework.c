#include <stdio.h>

int sumFind (int n)
{
    int sum =1;
    for (int i=0; i<=n;i++)
    {        
        sum = (i*(n+1))/2;
    }
    return sum;
}

int main()
{
    int number;
    printf("Please input number:\n");
    scanf("%d",&number);

    printf("The sum from 1 to %d is: %d",number, sumFind(number));
}