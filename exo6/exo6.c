#include<stdio.h>
int main() {
int array[9];

int val;
int rez;
int b=128;
int loop=1;
char choice;


    while(1){


        printf("Veuillez saisir une valeur entre 1 et 255\n");
        scanf(" %d",&val);
        if(val>0 && val<256){
        array[0]=val;
        rez=val;
        
        printf("La conversion de la valeur %d en binaire donne : ",array[0]);
        for (int i = 1; i < 9; i++)
        {
            
            if((rez-b) >=0){
                array[i]=1;
                rez=rez-b;
                b=b/2;
                printf(" 1 ");

            }else{
                array[i]=0;
            printf(" 0 ");
                b=b/2;
            }
            
        }
        }else{
            printf("valeur hors interval");
        }
         printf("\n");

    }

    
return 0;
}




