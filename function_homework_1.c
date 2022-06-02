#include <stdio.h>

char readC(); //|Prototype for char

int main()
{
    printf("Please input 3 symbols:\n");
    char a = readC();
    char b = readC();
    char c = readC();

    if (a >= '0' && a<= '9' )
        {
            printf("%c\n", a);
        }
    if (b >= '0' && b<= '9' )
        {
            printf("%c\n", b);
        }
    if (c >= '0' && c<= '9' )
        {
            printf("%c\n", c);
        } else
        {
            printf("There are no digits entered!\n");
        }       
  
return 0;
}

/*Function to get inputs*/
char readC ()
{
    char n;
    scanf("%c", &n);
    getchar();
    return n;
}