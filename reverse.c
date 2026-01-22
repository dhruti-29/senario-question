#include <stdio.h>
#include <string.h>

int main() {
    char a[100];

    printf("Enter string: ");
    gets(a);

    strrev(a);  
    printf("Reversed = %s", a);

    return 0;
}