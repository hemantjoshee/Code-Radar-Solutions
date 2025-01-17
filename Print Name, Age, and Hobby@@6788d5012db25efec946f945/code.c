#include <stdio.h>
int main() {
    char name[100];
    int age;
    char hobby[100];
    scanf("%c %d",name,&age);
    scanf("%c",hobby);
    printf("Name: %c\nAge: %d\nHobby: %c", name,age,hobby);
    
    return 0;
}