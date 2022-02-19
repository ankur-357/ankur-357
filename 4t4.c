#include<stdio.h>
int main(){
    int row = 5;
    int i,j;
    int x = (row*(row+1))/2 ;
    for ( i = 1; i <= row; i++)
    {
        for ( j = row; j>=i; j--)
        {
            printf("\t%d", x--);
        }
        printf("\n");
    }
    return 0;
}