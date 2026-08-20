
#include<stdio.h>

void main(void)
{
 int TabIdade [10];
 int cont;

 for ( cont = 0 ; cont < 10 ; cont ++)
    {
    printf("Digite a idade: %d \n", cont+1);
    scanf("%d",&TabIdade[cont]);
    }
   for ( cont = 0 ; cont < 10 ; cont ++)
   {

   printf("\n Tab_Idade[%d]=%d",cont, TabIdade[cont]);
   }










}
