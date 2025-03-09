#include<stdio.h>
void main()
{
    int i,j,n;
    for(i=n;i>=n;i--){
        for(j=1;j<=i;i++){
            printf("*");
            
            if(j<i){
                printf(" ");
            }
        }
        printf("\n");
    }
}