#include <stdio.h>
//array inside structure 
struct student{
    char name[200];
    int roll[5];
    int mark[5];
}a1;


int main() {
   printf("enter name :");
   fgets(a1.name,sizeof(a1.name),stdin);

   printf("\n enter roll number : ");
   for(int i =0;i<5;i++){
    scanf("%d",&a1.roll[i]);
   }
    printf("\n enter mark :  ");
    for(int i =0;i<5;i++){ 
    scanf("%d",&a1.mark[i]);
    }
    return 0;
}