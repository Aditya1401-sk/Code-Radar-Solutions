#include<stdio.h>
int main()
{
    int n;
    // printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            printf("%d ",j);
        }
        printf("\n")
    }
}