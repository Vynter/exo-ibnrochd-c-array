#include<stdio.h>
int main() 
{
    int arrayX[5][5];
    int count=10;
    int choice;

    for (int i = 0; i < 5; i++)
    {
        for (int z = 0; z < 5; z++)
        {

            arrayX[i][z]=count;
            count++;
        }
        
    }

        printf("----------------La matrice-----------------\n");

    for (int i = 0; i < 5; i++)
    {
        for (int m = 0; m < 5; m++)
        {
            printf("|%d|",arrayX[i][m]);
            if(m==4){
                printf("\n");
            }
        }

    }


    while(choice!=1 && choice!=2 ){
        printf("Veuillez introduire un des deux choix\n");
        printf("1. Affichage de la diagonale inferieur\n");
        printf("2. Affichage de la diagonale superieur\n");
        scanf(" %d",&choice);

    }

    switch (choice)
    {
    case 1:
        printf("----------------diagonale inferieur-----------------\n");
        int t=1;
        int space1=4;
            for (int i = 0; i < 5; i++)
            {
                for (int b = 0; b < t; b++)
                {
                    printf("|%d|",arrayX[i][b]);

                }
                for (int q = 0; q < space1; q++)
                    {
                        printf("|0 |");
                    }
                printf("\n");
                t++;
                space1--;
                }
        break;
    case 2:
        printf("----------------tringulaire superieur-----------------\n");
        int k=5;
        int space = 0;
        int y=0;
        for (int o = 0; o < 5; o++)
        {
            for (int q = 0; q < space; q++)
            {
                printf("|0 |");
            }
            for (int z = 0; z < k; z++)
            {  
                printf("|%d|",arrayX[o][z+y]);
 
                }
            printf("\n");
            y++;
            k--;
            space++;
                
            }
        break;
    default:
    break;

    }


    return 0;
}