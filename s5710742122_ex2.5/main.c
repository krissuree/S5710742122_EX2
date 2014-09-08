#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;

    printf("Please Enter Number: ");
    scanf("%d %d",&a,&b);
    c = a-b;
    d = b-a;

    if(a > b){
        printf("|a-b| = %d",c);
    }
    else{
        printf("|a-b| = %d",d);
    }
    return 0;
}
