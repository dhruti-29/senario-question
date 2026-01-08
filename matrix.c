#include<stdio.h>
int main(){
    int i,j,sum[i][j],a,b;
    printf("enter matrix");
for(i=0;i<3;i++){
    scanf("%d",&a);

printf("%d",a[i][j]);
}
printf("\n");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
       printf("%d ",sum[i][j]);
    }
    printf("\n");
}


}