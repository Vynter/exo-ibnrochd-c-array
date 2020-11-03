#include <stdio.h>
int main()
{

 int array[5][5]; 
 int tr=4;

for (int i=0; i<=tr; i++)
{
   array[i][i]=1;
   array[i][0]=1;
   for (int j=1; j<i; j++)
      array[i][j] = array[i-1][j] + array[i-1][j-1];
}
printf("----------\n");
for (int i=0; i<=tr; i++)
{
   for (int j=0; j<=i; j++){
         if (array[i][j])
            {
               printf("%d ", array[i][j]);
            }
      }
   printf("\n");
}
printf("----------\n");

 return 0;
}