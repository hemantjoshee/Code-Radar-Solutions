#include <stdio.h>
int main() {
    char name[];
    int age;
    char hobby[];
    scanf("%c %d",name,&age);
    scanf("%c",hobby);
    printf("Name: %c\nAge: %d\nHobby: %c", name,age,hobby);
    
    return 0;
}