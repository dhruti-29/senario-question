#include <stdio.h>
#include<stdlib.h>

int main() {
    int n,newsize;

    printf("enetr array size : ");
    scanf("%d",&n);

    int *arr=malloc(n * sizeof(int));
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\n enter new size : ");
    scanf("%d",&newsize);

    arr = realloc(arr,newsize * sizeof(int));

    printf("this is newe array : ");
    for(int i=0; i<newsize;i++){
        scanf("%d",&arr[i]);
    }

printf("final array :");
for(int i=0;i<n;i++){
    printf("%d , ",arr[i]);
}
    return 0;
}