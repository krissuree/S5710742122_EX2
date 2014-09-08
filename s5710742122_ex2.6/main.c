#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Please Enter Number: ");
    scanf("%d",&a);
    printf("Please Select Output Base [8 or 16]: ");
    scanf("%d",&b);

    if( b == 8){
        printf("Result: %o",a);
    }
    else if( b == 16 ){
        printf("Result: %x",a);
    }
    return 0;
}
