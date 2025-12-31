#include <stdio.h>

int main() {
    
int arr[5] = {10, 20, 30, 40, 50};

int *ptr = &arr[0];

for(int i=0; i<5; i++){
    printf("value of arr[%d]: %d\n",i,*(ptr+1));
}
    return 0;
}