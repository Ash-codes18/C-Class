#include <stdio.h>
#include <string.h>

// struct halua
// {
//     char name[50];
//     char color[30];
//     int price;
// };



// int main(){
//     struct halua h1;
//     h1.name="Gajar ka Halua";
//     h1.color = orange";
//     h1.price= 380;

//     printf("The name of the halua is : %s\n",h1.name);
//     printf("The color of the halua is : %s\n",h.color);
//     printf("The price of the halua is %s\n",h.price);
//     return 0;
// }
#include <stdio.h>

struct halua
{
    char name[50];
    char color[50];
    int price;
};

int main(){
    struct halua h1;
    strcpy(h1.name, "Gajar ka Halua");
    strcpy(h1.color, "orange");
    h1.price= 380;

    printf("The name of the halua is: %s\n", h1.name);
    printf("The color of the halua is: %s\n", h1.color);
    printf("The price of the halua is: %d\n", h1.price);
    return 0;
}
