#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %d",&arr[i]);
    }

    int mul=1;
    for (int i = 0; i < n; i++){
        mul=mul*arr[i];
    }
    printf("%d",mul);
    return 0;
}