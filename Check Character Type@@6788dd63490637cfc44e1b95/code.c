#include <stdio.h>
#include <ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if (isalpha(a)){
        if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }

    }
    else if (isdigit(a)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}