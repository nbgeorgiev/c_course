#include <stdio.h>

int main()

{
    int i = 0;
    long int initial = 1;
    do
    {
        initial = initial*(2*i+1);
        //printf("%i\n", initial);
        i+=1;
    } while (i<=9);

printf("%lld\n", initial);
return 0;
}