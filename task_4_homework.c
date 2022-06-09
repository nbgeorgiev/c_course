#include <stdio.h>

int rev_num (int n)
{
    int rem;
    int reverse = 0;
    while (n>0)
    {
        rem = n%10;
        reverse = reverse*10 +rem;
        n = n/10; 
    }
    return reverse;
}


int main()
{
    int num;
    printf("Please input numeber to be reverted:\n");
    scanf("%d", &num);
    printf("The reverted number is: %d\n", rev_num(num));

return 0;
}