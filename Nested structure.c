#include <stdio.h>
//struct team{
    //char name[100];
    //int n;
//struct mn{
   //char captain[100];
    //int rank;
//}s1;
//}e2;

struct team {
    char name[100];
    int n;

    struct mn {
        char captain[100];
        int rank;
    } s1; // nested structure variable 
} e2;

int main() {
printf("enter game name : ");
scanf("%s",e2.s1.captain);
printf("enter num : ");
scanf("%d",&e2.n);
    
    return 0;
}