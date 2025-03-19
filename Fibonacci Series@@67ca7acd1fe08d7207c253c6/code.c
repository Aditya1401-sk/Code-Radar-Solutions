#include<stdio.h>
void fibonacci(int n){
    int a=1,b=1,sum=0;
    for(int i=1;i<=n;i++){
        if(i==1){
            printf("%d",a);
            continue;
        }
        if(i==2){
            printf("%d",b);
            continue;
        }
        sum = a+b;
        a = b;
        b = sum;
        printf("%d ",sum);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}