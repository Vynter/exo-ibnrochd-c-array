#include<stdio.h>
int main() {

    int max;
    int indexMax=0;
    int min;
    int indexMin=0;

    int array[10];

     for(int i=0; i<10; i++){
         
         printf("Veuillez saisir la valeur N %d\n",i+1);
         scanf(" %d",&array[i]);
     }
     max=array[0];
     min=array[0];

    for(int j=0;j<10;j++){

        if(array[j] <= min){ 
            min=array[j];
            indexMin=j;
        }
        if(array[j] >= max){
            max=array[j];
            indexMax=j;
        }
    }

    printf("l'index de la valeur la plus petit est : %d et la valeur la plus petit est  : %d\n",indexMin,min);
    printf("l'index de la valeur la plus grande est : %d et la valeur la plus grande est  : %d\n",indexMax,max);

    return 0;
    }