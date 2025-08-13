#include <stdio.h>
#include <cs50.h>

int altura(void);

int main(void)
{
    int a = altura();
    for(int i = 1;i <= a; i++)
    {
        for(int j = 0; j <= a - i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < i; k++)
        {
            printf("#");
        }

        printf("  ");

        for(int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int altura(void)
{
    int b;
    do
    {
        b = get_int("Altura: ");
    }
    while(b < 1 || b > 8);
    return b;
}