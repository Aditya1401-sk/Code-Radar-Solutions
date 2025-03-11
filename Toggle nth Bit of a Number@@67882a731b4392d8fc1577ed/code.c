#include<stdio.h>
int main()
{
    int num,n,a;
    scanf("%d",&num,&n);
    a=num^(1<<n);
    printf("%d",a);
    return 0;
}