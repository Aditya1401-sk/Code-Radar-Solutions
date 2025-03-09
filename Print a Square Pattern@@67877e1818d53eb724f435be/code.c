#include<stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("*");
            if(j<n){
                printf(" ");
            }
        }
        printf("\n");
    }
}