#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a<0){
        printf("True\n");
    }
    if (a==0){
        printf("False\n");
    }
    else{
        printf("False");
    }
    return 0;
}