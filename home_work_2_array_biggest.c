#include <stdio.h> 

int main()

{
    int arr[5] = {100,2,10,4,500};
    int i;
    int bNumber = arr[0];

    for (i=1; i<5; i++)
       {
        if (bNumber < arr[i])
            bNumber = arr[i];
       }
    printf("The biggest number in the array is: %d!\n", bNumber);
return 0;
}