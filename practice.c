#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';
    for (i = 1; i <= 5; i++)
    {
        ch = 'A' + i - 1;
        for (j = 1; j <= 5 - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 == 0)
                printf(" ");
            else
                printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
