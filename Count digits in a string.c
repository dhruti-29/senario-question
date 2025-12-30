#include <stdio.h>

int main() {
    
    char s[500];
    fgets(s,sizeof(s),stdin);
int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='0'&& s[i]<='9'){
            count++;
        }
    }
    printf("total digits : %d",count);
    return 0;
}