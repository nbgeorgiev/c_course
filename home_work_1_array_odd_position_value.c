#include <stdio.h>

int main()
{
    int arr[10] = {1,23,56,89,77,56,45,45,89,56};
    int i;
    
    for (i=0; i<10; i++)
    {
        if (i% 2 == 1)
        {
            printf ("Odd array position [%d] with value [%d]\n", i, arr[i]);
        }

    }
return 0;
}

//==============================================
/*Raboti i taka, ne znam dali e pravilno 

int main()

{
    int arr[10] = {1,2,3,4,5,6,7,8,9,55};
    
    for (int i=0; i <5; i++)
        {
            printf("Array odd positions [%d] with values [%d].\n", 2*i+1, arr[2*i+1]); 
        }

return 0;
}*/