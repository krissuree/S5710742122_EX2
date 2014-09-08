#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a;
    printf("Please Enter Number: ");
    scanf("%d",&a);

    if(a > 40 && a <= 100){
        printf("Correct");
    }
    else {
        printf("Incorrect");
    }
    return 0;
}
