#include <stdio.h>
#include <cs50.h>
#include <math.h>

float troco(void);

int main(void)
{
   float t = troco();
   
   int centavos = round(t * 100);

   int moedas = 0;

   while(centavos >= 25)
   {
    centavos -= 25;
    moedas++;
    printf("Moeda de 25 centavos coletada.\n");
   }

   while(centavos >= 10)
   {
    centavos -= 10;
    moedas++;
    printf("Moeda de 10 centavos coletada.\n");
   }

   while(centavos >= 5)
   {
    centavos -= 5;
    moedas++;
    printf("Moeda de 5 centavos coletada.\n");
   }

   while(centavos >= 1)
   {
    centavos -= 1;
    moedas++;
    printf("Moeda de 1 centavos coletada.\n");
   }
   
   printf("Total de moedas utilizadas: %i\n", moedas);

}

float troco(void)
{
    float t;
    do 
    {
    t = get_float("Troco devido: ");
    }
    while(t <= 0);
    return t;
}