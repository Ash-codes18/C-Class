#include <stdio.h>

struct StuInfo
{
int Roll_no;
char *Student_Name;
int Reg_No;
};

int main(){
    struct StuInfo S1;

printf("Enter Student's Roll no. : ");
scanf("%d", &S1.Roll_no);
printf("Enter the Name of the Student : ");
scanf("%d",&S1.Student_Name);
printf("Enter the Registration No. : ");
gets(S1.Reg_No);


printf("Roll No. : %d\n",S1.Roll_no);
printf("Name : %s", S1.Student_Name);
printf("Registration No. : %d",S1.Reg_No);

    return 0;
}