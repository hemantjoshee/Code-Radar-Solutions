#include <stdio.h>
#include <string.h>
int main(){
    char star[100];
    fgets(star,sizeof(star),stdin);
    star[strcspn(star,"\n")]='\0';
    int len=strlen(star);
    printf("%d",len);
}