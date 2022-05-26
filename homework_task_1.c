#include <stdio.h>

int main()

{
int row;

    for (row = 1; row <8; row++)
        {
            if (row<2)
                {
                    printf("  *\n");
                }
            else if (row>1 && row<3)
                {
                    printf(" * *\n");
                } 
            else if (row>2 && row<6)
                {
                    printf("*   *\n");
                }
            else if (row>5 && row<7)
                {
                    printf(" * *\n");
                }
            else
                {
                    printf("  *\n");
                }
        }
return 0;
}