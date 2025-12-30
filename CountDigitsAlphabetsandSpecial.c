#include <stdio.h>

int main() {
 char c[100];
    int alp =0, dig=0, spcl=0;
fgets(c, sizeof(c), stdin); 
for(int i=0;c[i]!='\0';i++){
    if((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z')){
        alp++;
    }
    else if(c[i]>='0' && c[i]<='9'){
        dig++;
    }
    else{
        spcl++;
    }
}
printf("Alphabets: %d\n",alp);
printf("Digits: %d\n",dig);         
printf("Special Characters: %d\n",spcl);    
  
    return 0;
}