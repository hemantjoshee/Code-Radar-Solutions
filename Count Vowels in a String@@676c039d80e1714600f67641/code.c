#include <stdio.h>
#include <string.h>
int main(){
    char star[100];
    fgets(star,sizeof(star),stdin);
    star[strcspn(star,"\n")]='\0';
    int count=0;
    int len=strlen(star);
    for(int i=0;i<len;i++){
        if(i=='i'||i=='e'||i=='a'||i=='o'||i=='u'){
            count++;
        }
    }
    printf("%i",count);
}