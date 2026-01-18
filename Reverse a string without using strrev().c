#include <stdio.h>
#include<string.h>

int main() {
    
    char s[1000];
    
    fgets(s,sizeof(s),stdin);
char t[1000];
int a=strlen(s);
printf("%d",a);

for(int i=a-1;i>=0;i--){
printf("%c",s[i]);
}


    return 0;
}