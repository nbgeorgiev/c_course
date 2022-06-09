#include <stdio.h>
#include <stdbool.h>
#define size 3

int min (int a, int b)
{
    int minimum;
    if (a< b)
    {
        return a;
    } else
    {
        return b;
    }

}


int main()
{
    int a, b, c;
    
    printf("Please input two numbers for comparison:\n");
    scanf("%d%d%d",&a ,&b, &c);

    int m = min(a,b);
    printf("The smallest number is: %d\n", min(m,c));

    return 0;
}

