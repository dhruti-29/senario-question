#include <stdio.h>

int main() {
    int a[5] ={2,5,7,9,10};
int target;
int ri;
int rti;

printf("enter target value :");
scanf("%d",&target);


    for(int i=0;i<5;i++){

        for(int j=1;j<5;j++){

            if(a[i] + a[j] ==target){
ri = i;
rti = j;

            }
        }
    }

    printf("%d and %d",ri,rti);



    return 0;
}