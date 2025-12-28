#include <stdio.h>

int main() {
  char s[1000];
  fgets(s,sizeof(s),stdin);
  
  for(int i=0;s[i]!='\0';i++){
    if(s[i]>='a' && s[i]<='z'){
        s[i] = s[i] - 32;
    }
    printf("%c",s[i]);
  }
    return 0;
}