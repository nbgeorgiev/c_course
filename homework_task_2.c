#include <stdio.h>

int main()

{
    int arr[10] = {10,1,23,22,6,56,8,9,77,56};
    int i;
    int count = 0;

    for (i=0; i<10; i++)
    {
        if (arr[i]>=10 && arr[i]<100)
            count+=1;
            
    }
    printf("There are %d double digit numbers in the array!\n", count);

return 0;
}