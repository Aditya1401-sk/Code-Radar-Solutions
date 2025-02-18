// #include <stdio.h>
// int main()
// {
//     int a;
//     int b = 0;
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
//     if (b>2){
//         printf("Not Prime");
//     }
//     else{
//         printf("Prime");
//     }
//     return 0;
// }







#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
    }
    else{
        for(int i=1;i<=a;i++){
            if(a%i==0);
                b++;    
        }
    }
    if(b>2){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}