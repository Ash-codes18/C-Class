//To check how a student is performing
#include <stdio.h>

int main(){
    int marks,attendance;
    printf("Enter the total marks obtained : ");
    scanf("%d",&marks);
    printf("Enter your aggregate attendance : ");
    scanf("%d",&attendance);
    if(marks>=90 && attendance>=95){
        printf("Your performance is excellent \n Keep it up!");
    }
    else if (marks>=70 && attendance>=85){
        printf("\nYou are performing well! \nYou have the potential to be even better!");
    }
    else{
        printf("You need improvement!");
    }
    return 0;
}