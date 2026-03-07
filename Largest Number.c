#include <stdio.h>

int main() {
     int n =5;
    int a[5] ={3,30,34,5,9};
int r[n];
int j;
 int  index[n];

    for(int i=0;i<n;i++){
r[i] = a[i] % 10;
    }

    

    for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(r[j]>r[j+1]){
           int temp=r[j];
            r[j]=r[j+1];
            r[j+1]=temp;
          
        }
       index[i] = j;
    }
     
}

for(int i=0;i<n;i++){
printf("%d ",a[index[i]]);
}



    return 0;
}