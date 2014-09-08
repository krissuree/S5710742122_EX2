#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Please Enter Score: ");
    scanf("%d",&a);

    if(a>=80){
        printf("Your grade: A!!");
    }
    else if(a>=70 && a<=79){
        printf("Your grade: B");
    }
    else if(a>=60 && a<=69){
        printf("Your grade: C");
    }
    else if(a>=50 && a<=59){
        printf("Your grade: D");
    }
    else {
        printf("Your grade: F");
    }
    return 0;
}
