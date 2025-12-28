#include <stdio.h>

int main() {
    char ch[100];
    fgets(ch, sizeof(ch), stdin);
    

    for(int i=0;ch[i]!='\0';i++){ //first loop for traversing each character
int duplicate=0; //flag to check if character is duplicate

    for(int j=0;j<i;j++){ //second loop to check previous characters
    if(ch[i]==ch[j]){ //if duplicate found
duplicate = 1; //set flag
break; //exit inner loop
    }

    
}
if(duplicate==0){ //if no duplicate found, print character
        printf("%c",ch[i]); //print unique character ̰
    }
   

} }
