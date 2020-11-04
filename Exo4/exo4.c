#include<stdio.h>
int main() {

int array[10];

int indP=0;
int indNP=0;
int Pcount=0;
int NPcount=0;


for(int i=0; i<10; i++){
    printf("Veuillez saisir la valeur N %d\n",i+1);
    scanf("%d",&array[i]);
            if((array[i]%2)==0){

        Pcount++;
    }else{

        NPcount++;
    }
}

int tab2[Pcount];
int tab3[NPcount];


for(int j=0; j<10; j++){
    
        if((array[j]%2)==0){
            tab2[indP]=array[j];
            indP++;    
        }else{
            tab3[indNP]=array[j];
            indNP++;
        }
}
printf("--------------------------------------------------\n");
printf("Les valeurs paires sont les suivants: \n");
printf("--------------------------------------------------\n");

for (int i = 0; i < Pcount; i++)
{
    printf("la valeur %d \n",tab2[i]);

}
printf("--------------------------------------------------\n");
printf("Les valeurs impaires sont les suivants: \n");
printf("--------------------------------------------------\n");
for (int i = 0; i < NPcount; i++)
{
    printf("la valeur %d \n",tab3[i]);

}


return 0;
}