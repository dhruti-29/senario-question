#include <stdio.h>

typedef struct name{
    int roll;
    char name[50];
    float marks;
} Student;   // <-- अब 'Student' structure का नया नाम है

int main() {
    //struct student s1;  // पुराना तरीका
    Student s1;  // अब 'struct' लिखने की जरूरत नहीं
    s1.roll = 1;
    s1.marks = 89.5;
    printf("Roll: %d, Marks: %.2f", s1.roll, s1.marks);
    return 0;
}
