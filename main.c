#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a = 100;
   int b = 10;
   float c = 1;


    if (c == 1){
        c = a + b;
        printf("hasil :%i", c);
    } else
    if (c == 2){
        c = a-b;
        printf("hasil : %i", c);

    } else
    if (c == 3){
        c = a*b;
        printf("hasil : %i", c);

    }else
    if (c == 4){
        c = a/b;
        printf("hasil : %i", c);

    }else{
    printf("blank");
    }


    return 0;
}
