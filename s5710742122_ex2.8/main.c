#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Please Enter Score of Midterm and Final: ");
    scanf("%d %d",&a,&b);

    c = a+b ;
     if(a>=20 && b>=30 && c>=50){
        printf("PASS with score = %d",c);
     }
     else if(a<20 && b>30 && c>=60){
        printf("PASS with score = %d",c);
     }
     else if(a>20 && b<30 && c>=60){
        printf("PASS with score = %d",c);
     }
     else if(a>20 && b<30 && c<60){
        printf("FAIL with score = %d",c);
     }
     else if(a<20 && b>30 && c<60){
        printf("FAIL with score = %d",c);
     }
     else if(a<20 && b<30){
        printf("FAIL with score = %d",c);
     }

    return 0;
}
