#include <stdio.h>

int main(){
    // int usf, euf;
    // printf("Enter US Floor\n");
    // scanf("%d", &usf);   & - passing by reference
    // euf = usf - 1;
    // printf("EU Floor %d\n", euf);

    // char name[100];
    // printf("Enter name\n");
    // scanf("%100s", name);
    // printf("Hello %s\n", name);

    char line[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", line);  //scan until the end of the line or 1000 characters.
    printf("Line: %s\n", line);
}