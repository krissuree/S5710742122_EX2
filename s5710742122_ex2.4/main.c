#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Please Enter Number: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c && b>c){
        printf("%d > %d > %d",a,b,c);
    }

    else if (a<b && a<c && b<c){
        printf("%d > %d > %d",c,b,a);
    }
    else if (b>a && b>c && a<c){
        printf("%d > %d > %d",b,c,a);
    }
    else if (b<a && b<c && a>c){
        printf("%d > %d > %d",a,c,b);
    }
    else if (c>a && c>b && a>b){
        printf("%d > %d > %d",c,a,b);
    }
    else if (c<a && c<b && a<b){
        printf("%d > %d > %d",b,a,c);
    }
    return 0;
}
