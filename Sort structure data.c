#include <stdio.h>
#include<string.h>
struct name{
    char name[100];
    int mark;
};


int main() {
    
struct name s1[4]={ 
{"dhruti",99},{"drashti",98},{"asd",32},{"asad",900} 
};

for(int i=0;i<3;i++){
    for(int j=0;j<3-i;j++){
        if(strcmp(s1[j].name,s1[j+1].name) >0){
            struct name  temp = s1[j];
            s1[j]=s1[j+1];
            s1[j+1]=temp;
        }
    }
}
for(int i=0;i<4;i++){ 
printf("sorted marks %s:\n",s1[i].name);
}




    return 0;
}