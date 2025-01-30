#include <stdio.h>
#include<ctype.h>
int main()
{
    char a;
    scanf("%c",&a);
    if (isupper(a)){
        printf("Uppercase",a);
    }
    else if(islower(a)){
        printf("Lowercase",a);
    }
    return 0;
}