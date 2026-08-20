#include<stdio.h>

int main()
{
int mat[3][3];
int lin, col, soma;
soma =0 ;

for(lin =0 ;lin <3; lin++)
{
for (col =0; col<3; col++)
{
printf("digite um valor\n");
scanf("%d",&mat[lin][col]);
soma = soma + mat[lin][col];
}
}
printf("A soma da matriz é:%d\n", soma);





}
