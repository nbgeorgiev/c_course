#include <stdio.h>

int main()

{
    char arrchar[10] = {'d','p','+','*','A','5','g','7','`','A'};
    int i;
    int count =0;

    for (i=0; i<10; i++)
    {
        if (arrchar[i]=='A') break; //65 ASCII
        {
            count+=1;
        }                         
    }

    if (count < 10)
    {
        printf("The letter 'A' is found for the first time at [%dth] position!\n", count);
    }
    else 
    {
        printf("The is no such a letter in the array!\n");
    }
return 0;
}