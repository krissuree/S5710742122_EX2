#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Please Enter coordinate[x,y]: ");
    scanf("%d %d",&x,&y);

    if(x>0 && y>0){
        printf("(%d,%d) = Q1",x,y);
    }
    else if(x<0 && y>0){
        printf("(%d,%d) = Q2",x,y);
    }
     else if(x<0 && y<0){
        printf("(%d,%d) = Q3",x,y);
    }
     else if(x>0 && y<0){
        printf("(%d,%d) = Q4",x,y);
    }
     else if(x==0 && y==0){
        printf("(%d,%d) = origin",x,y);
    }
     else if(x==0 && (y>0 || y<0)){
        printf("(%d,%d) = on Y",x,y);
    }
     else if((x<0 || x>0) && y==0){
        printf("(%d,%d) = on X",x,y);
    }
    return 0;
}
