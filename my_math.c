#include <stdio.h>
#include "my_math.h"






int min(int num1, int num2){
    
    if (num1 == num2)
    {
        return num1;
    }
    

    if (num1<num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
    
}


void A(int arr[N][N])
{

    for(int i = 0; i<N ; i++)
    {
        for (int j = 0; j< N; j++)
        {
                
            scanf("%d", &arr[i][j]);
        }

    }

      
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {

        if (i==j)
        {
            continue;
        }
        

           for (int k = 0; k < N; k++)
           {

               if (i == k && j == k)
               {
                    continue;
               }
					
                
                arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]); 
           }
           
        }
        
    }

}



void B(int matrix[N][N], int i, int j)
{

     if (matrix[i][j]==0)
    {
         printf("False\n");
    }
    else
    {
       printf("True\n");
    }
   
}



void C(int matrix[N][N], int i, int j)
{

    if (matrix[i][j] == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", matrix[i][j]);
    }
    
}




int main(){
char x;
int i=0,j=0;
scanf("%c", &x);


int matrix[N][N];

do
{
    if (x == 'A')
    {
        A(matrix);
        for(int i = 0; i<N ; i++)
        {
            for (int j = 0; j< N; j++)
            {
                
                printf("%d ", matrix[i][j]);
            }
            printf("\n");

        }
    }
    if (x == 'B')
    {
        scanf("%d %d", &i, &j);
        B(matrix, i, j);
    }
       if (x == 'C')
    {
        scanf("%d %d", &i, &j);
        C(matrix, i, j);
    }
    
    scanf("%c", &x);
    
} while (x != 'D');

    return 0;
} 