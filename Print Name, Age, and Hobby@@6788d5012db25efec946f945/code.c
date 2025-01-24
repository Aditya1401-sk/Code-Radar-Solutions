#include <stdio.h>
int main()
{
    char name[100],hobby[100];
    int age[50];
    scanf("%s %d\n",&name,&age);
    scanf("%s",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;

}
