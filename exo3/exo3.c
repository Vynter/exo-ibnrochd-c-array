#include<stdio.h>
int main() {

int array[10];
int arrayP[10];

for(int i=0; i<10; i++){
    printf("Veuillez saisir la valeur N %d\n",i+1);
    scanf(" %d",&array[i]);
}

for(int j=0; j<10; j++){

    arrayP[j]=array[j]*array[j];

    printf("%d^2 = %d\n",array[j],arrayP[j]);
}




return 0;
}