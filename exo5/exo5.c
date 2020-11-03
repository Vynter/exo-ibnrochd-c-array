#include<stdio.h>
int main() {
int min;    
int array[10];
// petit au grand

for(int i=0; i<10; i++){
    printf("Veuillez saisir la valeur N %d\n",i+1);
    scanf(" %d",&array[i]);
}

min=0;

for (int a = 0; a < 10; a++)
{
    for (int z = 0; z < 10; z++)
{
    if(array[a]<array[z]){
        min=array[z];
        array[z]=array[a];
        array[a]=min;
    }
}

}

for (int k = 0; k < 10; k++)
{
    printf("la valeur N %d  est %d\n",k+1,array[k]);

}


    return 0;
}