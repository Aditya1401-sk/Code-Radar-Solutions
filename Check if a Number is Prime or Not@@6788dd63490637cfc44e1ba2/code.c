// #include<stdio.h>
// int main()
// {
//     int a;
//     int b=0;
//     scanf("%d",&a);
//     if(a<=1){
//         printf("Not Prime");
//     }
//     else{
//         for(int i=1;i<=a;i++){
//             if(a%i==0)
//                 b++;
//         }
//     }
//     if(b>2){
//         printf("Not Prime");
//     }
//     else{
//         printf("Prime");
//     }
// }


#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a=0;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}