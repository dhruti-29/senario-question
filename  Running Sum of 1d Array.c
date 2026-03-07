#include<stdio.h>
int main(){
int n;
printf("how many numbers in array ? ");
scanf("%d",&n);
int a[n];

printf("INPUT: nums =");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
      
    }

   

int sum[n]; 
sum[0] = a[0];    
for(int i=1;i<n;i++){
    /*sum = a[i]
    sum = a[i] + a[i-1]
    sum = a[i] +a[i-1] + a[i-2]
    sum = a[i] + a[i-1] +a[i-2] + a[i-3] */

    
sum[i]= sum[i-1] + a[i];
    
}
printf("output :nums =");

for(int i=0;i<n;i++){
    printf(" %d ",sum[i]);
}
;
}