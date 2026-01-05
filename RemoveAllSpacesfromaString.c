#include <stdio.h>

int main() {

    char ch[100];
    fgets(ch, sizeof(ch), stdin); 
    for(int i=0; ch[i]!='\0'; i++){
        int count=0;
        if(ch[i]==' ' || ch[i]=='\n'){
            continue;
        }
        else{ 
        for(int j=0; j<i; j++){
            if(ch[i]==ch[j]){
                count++;
                break;
            }
        }
        }
        if(count>0){
            ch[i]=' ';
    }
for(int i=0; ch[i]!='\0'; i++){
        if(ch[i]!=' '){
            printf("%c", ch[i]);
        }
    }
    printf("\n");
    return 0;       
}} 