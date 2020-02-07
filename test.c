#include "stdio.h"
#include "stdlib.h"
int main(){
    int x=0;
    printf("Hello\n");
    scanf("%d",&x);
    printf("x = %d\n",x);
    if(x<100)
        printf("Small\n");
    else
        printf("Big\n");
        
    system("pause");
    return 0;
}