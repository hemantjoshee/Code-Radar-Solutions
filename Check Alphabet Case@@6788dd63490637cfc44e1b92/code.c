#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    int b=a;
    if (b>=65&&b<=90){
        printf("Uppercase");
    }else if(b>=97&&b<=122){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}