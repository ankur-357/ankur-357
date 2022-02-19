#include<stdio.h>
int main(){
    int row = 5;
    int i,col; ;
    for ( i = 1; i <= row; i++)
    {
        for ( col = 1; col<=i; col++)
        {
            printf("\t%d", col*col);
        }
        printf("\n");
    }
    return 0;
}