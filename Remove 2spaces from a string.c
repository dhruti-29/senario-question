#include <stdio.h>

int main() {
    
char s[100];
fgets(s,sizeof(s),stdin);
int j=0;
char c[100];
for(int i=0;s[i]!='0';i++){
    if(s[i]!=' '){
        c[j]=s[i];
         j++;
    }
   c[j]='\0';
}
printf("%s",c);



    return 0;
}