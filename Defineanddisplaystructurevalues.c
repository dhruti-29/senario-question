#include <stdio.h>
#include<string.h>

    
struct student {
    char name[100];
    int age;
    int mark;
}s1;
int main() {

  strcpy(s1.name, "Ankush");
s1.age =18;
s1.mark=99;
printf("Name: %s\n", s1.name);              
printf("Age: %d\n", s1.age);
printf("Mark: %d\n", s1.mark);

    return 0;
}