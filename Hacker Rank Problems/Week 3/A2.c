#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    int b=1;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        b=b*i;
    }
    printf("%d",b);
    return 0;
}
