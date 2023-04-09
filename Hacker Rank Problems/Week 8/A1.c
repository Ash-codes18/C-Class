#include <stdio.h>
#include <math.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n],ld[n],mul[n];

    //taking array input
    for (int i = 0; i < n; i++)
    {
        scanf(" %d",&arr[i]);
    }

    //Taking out the last digit of every no. and storing them in an array
    for (int i = 0; i < n; i++)
    {
        ld[i]=arr[i]%10;
    }

// Creating the no.
    for (int i = 0; i < n; i++)
    {
        mul[i]=ld[i]*(int)pow(10,n-i-1);
    }

 for (int i = 0; i < n; i++)
    {
        sum=sum+mul[i];
    }

if(sum%10==0){
    printf("Yes");
}
else{
    printf("No");
}
    return 0;
}
