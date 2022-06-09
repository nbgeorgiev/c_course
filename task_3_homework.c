#include <stdio.h>

int multip(int n)
{
    for (int i=1; i<=n; i++)
    {
        int mul = n*i;
        printf("%d x %d = %d\n",i,n,mul);
    }
}

int main()
{
    printf("Please input number for multipliction table:\n");
    int n;
    scanf("%d",&n);
    int mul_num = multip(n);

    return 0;
}