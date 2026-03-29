#include <stdio.h>

int main() {
    char c[100];
    int count =1;
    char ch=' ';
fgets(c, sizeof(c), stdin);


for(int j=0;c[j]!='\0';j++){
       if(c[j]==ch){
           count++;
           
       }
}

printf("%d",count);
 }