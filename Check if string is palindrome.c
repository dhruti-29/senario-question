#include <stdio.h>
#include<string.h>

int main() {
    char s[500];
    char d[500];


    gets(s);
    

    int c = strlen(s);

    int j=0;

    for(int i=c-1;i>=0;i--){
       d[j] = s[i];
j++;
    }
    d[j]='\0';
if(strcmp(s,d)==0){
    printf("palidrome");
}
else {
    printf("noooooo😭");
}
    
    return 0;
}