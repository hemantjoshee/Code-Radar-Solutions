#include<stdio.h>
#include <string.h>
int main(){
    char star[100];
    fgets(star,sizeof(star),stdin);
    star[strcspn(star,"\n")]='\0';
    int len=strlen(star);
    char str[100];
    char temp;
    strcpy(str,star);
    for(int i=0;i<len/2;i++){
        char temp=star[i];
        star[i]=star[len-i-1];
        star[len-i-1]=temp;
    }
    if (strcmp(str,star)==0){
        printf("Yes");
        return 0;
    }
    printf("No");
    
}