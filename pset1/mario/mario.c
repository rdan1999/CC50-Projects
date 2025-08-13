#include <stdio.h>
#include <cs50.h>

int altura(void);

int main(void)
{
    //Solicita ao usuário a altura da piramide
    int a = altura();
    //determina a quantidade de linhas
    for(int i = 1; i <= a; i++)
    {
        //Quantos espaços haverá na pirâmide?
        for(int j = 0; j < a - i; j++)
        {
            printf(" ");
        }
        //Quantas # haverá na pirâmide?
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

