#include <stdio.h>
#include<string.h>
struct team{
    char name[100];
    int n;
}s1;

    struct mn {
        char captain[100];
        int rank;
    }d1;

int main() {
    struct team s1 ={"dhruti",2};
    struct mn d1={"dhruti",2};
    
    if(strcmp(s1.name , d1.captain)==0 && s1.n == d1.rank){
        printf("both are equal");
    }
    else{
        printf("not !!!");
    }
    return 0;
}