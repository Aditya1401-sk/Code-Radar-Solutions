#include<stdio.h>
int main()
{
    int a,b,result;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c == '+'){
        result = a+b;
        printf("%d",result);
    }
    else if(c == '-'){
        result = a-b;
        printf("%d",result);
    }
    else if(c == '*'){
        result = a*b;
        printf("%d",result);
    }
    else if(c == '/'){
        if(b!=0){
            result = a/b
            printf("%d",result);
        }
        else{
        printf("Error");
        }
       }
    else{
        printf("Invalid");
    }
    
}