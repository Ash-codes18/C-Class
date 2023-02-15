#include<stdio.h>
int main (){
int choice, a,b,s;
while(1)
{
printf("\n1. Addition");
printf("\n2. odd-even");
printf("\n3. printing N numbers");
printf("\n4. exit");

printf("\n\nEnter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter First no. : ");
scanf("%d",&a);
printf("Enter Second no. : ");
scanf("%d",&b);
s=a+b;
printf("\nSum is %d",s);
break;
case 2:
printf("Enter a number");
scanf("%d", &a);
if(a%2==0)
printf("Even");
else
printf("Odd");

break;
case 3:
printf("Enter a numbers");
scanf("%d",&a);
for(b=1;b<=a;b++)
printf("\n\t%d",b);

break;
case 4:
    break;
    break;
default:
 printf("No such option\n\n\n");
 break;
}
}
return 0;

}