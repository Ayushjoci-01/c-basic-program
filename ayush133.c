// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    char name[90];
    printf("enter  your name");
    gets(name);
    int l=strlen(name);
    printf("len of the string is %d",l);

    return 0;
}