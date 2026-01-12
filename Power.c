#include <stdio.h>

int powr(int x,int y){
    int r=1,i;
    for(i=0;i<y;i++)
        r*=x;
    return r;
}

int main(){
    printf("%d", powr(2,4));
    return 0;
}