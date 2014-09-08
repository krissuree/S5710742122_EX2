#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Please Enter Number: ");
    scanf("%d",&a);

    if(a%2 == 0){
        printf("This is even");
    }
    else {
        printf("This is odd");
    }
    return 0;
}

