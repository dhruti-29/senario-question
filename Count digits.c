#include <stdio.h>

int cnt(int n){
    int c=0;
    while(n>0){
        c++;
        n/=10;
    }
    return c;
}

int main(){
    int n=9876;
    printf("%d", cnt(n));
    return 0;
}