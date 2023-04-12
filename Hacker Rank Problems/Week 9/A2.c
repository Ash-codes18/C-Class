#include <stdio.h>

struct cricket 
{
    int id[11];
    int score[11];
};


int main(){
    int a;
    scanf("%d",&a);
    struct cricket c;
    for(int i=0;i<11;i++){
        scanf("%d %d",&c.id[i],&c.score[i]);
    }

    int sum=0;
    for(int i=0;i<11;i++){
        sum+=c.score[i];
    }
    printf("%d",sum);
    return 0;
}