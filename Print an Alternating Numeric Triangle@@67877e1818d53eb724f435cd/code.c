#include<stdio.h>
int main()
{
    int n,num=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0) a=1;
        else a=0;
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            if(a==0) a=1;
            else a=0;
        }
        printf("\n");
    }
}