#include <stdio.h>
#include<string.h>


int main() {
    char ch[100];
    fgets(ch, sizeof(ch), stdin);
     
int len=strlen(ch);
      for(int i=0;i<len-1;i++){
     for(int j=0;j<len-i-1;j++){ 
            if(ch[j]>ch[j+1]){
                char temp =ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=temp;
            }
        }
    }

    printf("%s",ch);
    
}
