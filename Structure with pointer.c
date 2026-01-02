#include <stdio.h>

struct card{
char name[1000];
int mo_num;


};

int main() {

    struct card s1;

    struct card *ptr = &s1;

    printf("enter your name :");
    scanf("%s",ptr->name); 
    //scanf("%s",&name);

    printf("enter num : ");
    scanf("%d",&ptr->mo_num);
    
    return 0;
}