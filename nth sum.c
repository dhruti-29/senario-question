#include<stdio.h>
int main(){

int i,n,sum;

printf("Enter your number: ");
scanf("%d",&n);

sum=0;

for(i=1;i<=n;i++){
    sum+=i;
}



printf("%d",sum);


}