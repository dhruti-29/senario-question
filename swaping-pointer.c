#include <stdio.h>
int swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main() {
    int p=2,q=9;
    printf("Before swapping: p=%d, q=%d\n",p,q);
    swap(&p,&q);
    printf("After swapping: p=%d, q=%d\n",p,q);

   // printf("Value of p: %d\n", p);
    //printf("Address of p: %p\n",&p);


    return 0;
}