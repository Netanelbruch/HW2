#include <stdio.h>
#include "my_mat.h"

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