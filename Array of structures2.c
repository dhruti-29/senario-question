#include <stdio.h>

struct student{

    char name[200];
    int roll;
    int mark;

};


int main() {
    struct student a1;
    printf("enter name : ");
    scanf("%s",a1.name);
    for(int i=0;i<5;i++){

printf("\nenter roll %d :",i+1);
scanf("%d", &a1.roll[i]);
printf("\nenter mark %d :",i+1);
scanf("%d", &a1.mark[i]);
    }
for(int i=0;i<5;i++){
    printf("%d.NAME :%s ROLL NUM :%d MARK:%d  \n",i+1,a1.name,a1.roll,a1.mark);
}


    return 0;
}