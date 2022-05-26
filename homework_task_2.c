#include <stdio.h>

int main()

{
    int n;
    int sum = 0;
    int i;
    printf("Please input number:\n");
    scanf("%d", &n);
        
        for (i = 0; i < n; i++)
        {
            sum = sum +i*i;
        }
    printf("%d\n", sum);    

return 0;
}