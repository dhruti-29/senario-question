#include <stdio.h>
// Use structure for marks in 3 subjects and calculate total + average.

struct student{
    char sname[500];
    int mark[3];
    
}s1;


int main() {
    printf("ENTER SUBJECT NAME :");
    fgets(s1.sname,sizeof(s1.sname),stdin);
    int sum = 0;
printf("enter marks : \n");
    for(int i=0;i<3;i++){
scanf("%d",&s1.mark[i]);

    }
    for(int i=0;i<3;i++){
        sum = sum + s1.mark[i];
    }
    float  ans = sum / 3.0;
    printf("\n avrage of three subject's mark : %f",ans);
    return 0;
}