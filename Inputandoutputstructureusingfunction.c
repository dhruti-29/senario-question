#include <stdio.h>

//structure synax is outside the function
    struct meta{
        char name[100];
        int id;
    }m1;

void readstrure(struct meta m1);
void readstrure(struct meta m1){
   scanf("%s",m1.name);
   
    printf("name : %s\n",m1.name);
    scanf("%d",&m1.id);
    printf("id : %d\n",m1.id);  
}

int main(){
    readstrure(m1);
    return 0;
}