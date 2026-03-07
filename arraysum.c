#include <stdio.h>

int main() {
int sum = 0;    
    int a[4]={1,2,3,4};

    for(int i=0;i<4;i++){
         sum = sum +  a[i];
    }

    printf("%d",sum);
    return 0;
}