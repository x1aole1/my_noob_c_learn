#include<stdio.h>


int main ()
{
    int n[10];
    int i,j;

    for ( i = 0; i < 10; i++ )
    { 
        n[i] = 100 * i ;

    }
    for ( j = 0; j < 10; j++ )
    {
    
        printf("Elementn[%d] is %d\n", j, n[j]);
    }
    return 0;
}