//differet ways to initialize structure at the time of declaration
//different from first
#include <stdio.h>
struct book{
    char name[900];
    int pn;
    char nameauthor[900];
};
int main() {
    struct book a1={"apj",234,"abdul"};
    printf("name : %s\n",a1.name);
    printf("pagenumber : %d\n",a1.pn);
    printf("nameauthor : %s\n",a1.nameauthor);
    return 0;
}