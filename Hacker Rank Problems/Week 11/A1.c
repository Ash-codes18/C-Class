#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function  
    int temp=*a;
    int temp1=*b;
    *a=temp+temp1;
    *b=abs(temp-temp1);  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}