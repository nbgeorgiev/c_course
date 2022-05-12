#include <stdio.h>

int main()

{
    int i = 0;
    long int initial =1;
    while (i<=9) {
        initial = initial*(2*i+1);
        i+=1;
    }

printf("%lld\n", initial);
return 0;
}