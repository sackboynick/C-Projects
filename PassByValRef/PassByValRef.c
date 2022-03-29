#include <stdio.h>

int power(int x,int y){
    int result=x;
    for(int i=1;i<y;i++)
    result*=x;
    return result;
}

void multiSwap(int *a,int *b, int *c){
    int tmp=*a;
    *a=*b;
    *b=*c;
    *c=tmp;
}


int main(){

    printf("%d\n",power(2,10));

    int a=1;
    int b=2;
    int c=3;
    printf("%d, %d, %d\n",a,b,c);

    multiSwap(&a,&b,&c);
    printf("%d, %d, %d\n",a,b,c);
    return 0;
}