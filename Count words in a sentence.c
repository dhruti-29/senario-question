#include <stdio.h>

int main() {
    
char s[10000];
fgets(s,sizeof(s),stdin);

int word=1;

for(int i=0;s[i]!='\0';i++){
    if(s[i]==' '){
word++;
    }
}
printf("%d",word);

    return 0;
}