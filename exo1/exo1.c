#include<stdio.h>
int main() {

     int val;
     int occ=0;
     int array[10];

     for(int i=0; i<10; i++){
         printf("Veuillez saisir la valeur %d \n",i+1);
         scanf(" %d",&array[i]);
     }

    printf("Veuillez choisir une valeur auquel\n");
    scanf("%d",&val);

    for(int j=0;j<10;j++){

        if(array[j]==val){ 
        occ++;
        }
        
    }

    printf("le nombre d occurance de la valeur %d est de : %d\n",val,occ);

    return 0;
    }