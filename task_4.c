#include <stdio.h>
#include <stdbool.h>

bool oddcheck (int);

int main()

{
    int n;
    printf("Please input number: \n");
    scanf("%d", &n);
    int numtest = oddcheck(n);
    
    if (numtest == 1)
    {
        printf("The number %d is Even!\n",n);
    }
    else
    {
        printf("The number %d is Odd!\n",n);
    }

    return 0;
}

bool oddcheck (int n)
{
    bool checkNum = true; //True is Even!
    if (n%2 == 0)
    {
        checkNum = true;
    }
    else 
    {
        checkNum = false;
    }
return checkNum;
}
