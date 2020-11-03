#include<stdio.h>
int main() {

int array[8];
int val=0;
int base=128;
int bin;

printf("Veuillez saisir une valeur binaire bit par bit (de gauche a la droite)\n");

for (int i = 0; i < 8; i++)
{
    printf("Veuillez saisir le bit N %d \n",i+1);
    scanf("%d",&array[i]);  
}
printf("la valeur binaire : ");
for (int i = 0; i < 8; i++)
{
    printf("%d ",array[i]);
    if(array[i] ==1){
        val+=base;
    }

    base=base/2;
  
}

printf("donne en decimal : %d",val);

return 0;
 }