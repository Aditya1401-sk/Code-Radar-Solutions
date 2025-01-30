#include <stdio.h>
#include<ctype.h>
int main()
{
    char a;
    scanf("%c",&a);
    if (isupper(a)){
        printf("Uppercase %d",a);
    }
    else if(islower(a)){
        printf("Lowercase %d",a);
    }
    return 0;
}