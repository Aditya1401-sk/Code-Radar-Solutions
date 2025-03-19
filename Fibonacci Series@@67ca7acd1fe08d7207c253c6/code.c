#include<stdio.h>
int main()
{
    int n,a=1,b=1,sum=1;
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++){
        sum = a+b;
        a = b;
        b = sum;
    }
    printf("%d",sum);
}