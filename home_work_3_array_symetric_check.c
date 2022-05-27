#include <stdio.h>
#include <stdbool.h>

int main()

{
    int arr[20]={1,2,3,4,5,6,7,8,9,1,10,9,8,7,6,5,4,3,2,1};
    int i;
    bool flag = true;
    for (i=1; i<20; i++)
    {
            if (arr[i]!=arr[19-i]) 
            {                   
                flag = false;
            }
    }
            if (flag == true)
            {
                printf("The array is symetrical!\n");
            }
            else
            {
                printf("The array is A-symetrical!\n");
            }                   
return 0;
}
        


