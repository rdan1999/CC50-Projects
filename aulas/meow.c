#include <stdio.h>
#include <cs50.h>

void miau(int n);

int main(void)
{
     int numero_de_vezes = get_int("Quantos miaus? ");
     miau(numero_de_vezes);

}

void miau(int n)
{
     for(int i = 0; i < n; i++)
     {
          printf("miau.\n"); 
	 }
}

