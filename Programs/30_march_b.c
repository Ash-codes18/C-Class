// #include <stdio.h>

// int main(){
//     // printf("To quit the program enter 69");
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<sizeof(arr)/4;i++){
//         int a,val;
//         printf("\nEnter the location to insert the element in : ");
//         scanf("%d",&arr[a]);
//         printf("Enter the value : ");
//         scanf("%d",&val);
//         arr[a]=val;
//         printf("%d",arr[a]);
//     }

//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5};
//     int position, value;
//     printf("Enter the location where you want to insert an element:\n");
//     scanf("%d",&position);
//     printf("Enter the value to insert:\n");
//     scanf("%d",&value);

//     for (int c=4;c>=position-1; c--){
//         arr[c+1]=arr[c];
//     }

//     arr[position-1]=value;

//     printf("Resultant array:\n");
//     for (int c=0;c<5;c++){
//         printf("%a",arr[c]);
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    
    int c,d;
    int a[]={1,2,3,4,5};
    int b[(sizeof(a)/4)+1];
    printf("Enter the value you want to insert : ");
    scanf("%d",&c);
    printf("Enter the location you want the value to be inserted in : ");
    scanf("%d",&d);
    if(d>=sizeof(a)/4){
        printf("Index out of range \n");
    }
    else{
        for(int i=0;i<d;i++){
            b[i]=a[i];
        }
        b[d]=c;
        for(int i=d+1;i<sizeof(b)/4;i++){
            b[i]=a[i-1];
        }
    }
    for(int i=0;i<sizeof(b)/4;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}