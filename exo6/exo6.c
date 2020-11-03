#include<stdio.h>
int main() {
int array[9];
int bin[8]={128,64,32,16,8,4,2,1};
int val;
int rez;
int b=128;
int loop=1;


while(loop==1)
{
    while(1){


        printf("Veuillez saisir une valeur entre 1 et 255\n");
        scanf(" %d",&val);
        if(val>0 && val<256){
        array[0]=val;
        rez=val;
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
        // while(choice!="O" || choice!="N" ){
        // printf("Voulez vous continuer? O/N\n");
        // scanf(" %c",&choice);
        // if(choice == "N"){
        //     loop=0;
        // }
        // }

    }
}
    
return 0;
}




