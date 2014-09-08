#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Please Enter Number: ");
    scanf("%d",&a);

    if(a%2 == 0 || a%3 == 0){
        printf("Correct");
    }
    else {
        printf("Incorrect");
    }
    return 0;
}

