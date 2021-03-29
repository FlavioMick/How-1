#include <iostream>
#include <math.h>
using namespace std;

int main()
{

int numero;
int n1;
int i = 0, j;
int vet_bin[30];
int aux_num = numero;
int valor, sobra, novoValor = 0;

printf("BEM VINDO A CAUCULADORA DE CONVERSAO DE BASE \n\n");

printf("Qual base deseja Converter?\n");
printf("\nDecimal para Binario tecle -> [1] \n");
printf("Binario para Decimal tecle -> [2] \n");
printf("\n \nInforme a opcao desejada: ");

scanf("%d",&n1);

if(n1==1)
{

printf("\n\nINFORME O VALOR EM DECIMAL: ");

scanf("%d",&numero);


while(numero > 0)
{
vet_bin[i] = numero % 2;
i++;
numero = numero / 2;
}
printf("\nEM BINARIO: ");

for(j = i - 1; j >= 0; j--)
{
printf("%d",vet_bin[j]);
}
printf("\n");

}
if(n1==2)
{
printf("\n\nINFORME O VALOR EM BINARIO: ");
scanf("%d",&valor);
for (j = 0; j < 6; j++)
{
sobra = valor - ((valor / 10)*10);

valor = valor / 10;
novoValor += sobra * pow(2,j);
}
printf("\nEM DECIMAL: %i \n", novoValor);
}
else
{

    printf( "   \n\n OBRIGADO POR UTILIZAR A CAUCULADORA DE CONVERSAO DE BASE \n\n\n              ");

}

system("pause");
return 0;
}
