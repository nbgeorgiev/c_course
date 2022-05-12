#include <stdio.h>

int main()

{
    int i = 2;
    long int initial = 1;
    do
    {
        initial = initial*i;
        i+=2;
    } while (i<=20);

printf("%lld\n", initial);
return 0;
}