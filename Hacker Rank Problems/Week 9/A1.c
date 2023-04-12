#include <stdio.h>

struct students
{
    int age;
    char firstname[50];
    char lastname[50];
    int standard;
};


int main(){
    struct students s1;
    scanf("%d",&s1.age);
    scanf("%s",&s1.firstname);
    scanf("%s",&s1.lastname);
    scanf("%d",&s1.standard);
    printf("%d %s %s %d",s1.age,s1.firstname,s1.lastname,s1.standard);
    return 0;
}