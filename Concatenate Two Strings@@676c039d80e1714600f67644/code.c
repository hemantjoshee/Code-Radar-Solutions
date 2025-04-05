#include <stdio.h>
#include <string.h>
int main(){
    char star[100];
    char str[100];
    char star3[100];
    fgets(star,sizeof(star),stdin);
    star[strcspn(star,"\n")]='\0';
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    strcat(star,str);
    printf("%s",star);
}