#include <stdio.h>

int main()

{
    int i = 2;
    long int initial =1;
    while (i<=20) {
        initial = initial*i;
        i+=2;
    }

printf("%lld\n", initial);
return 0;
}