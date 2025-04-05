#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char star[100];
    fgets(star,sizeof(star),stdin);
    star[strcspn(star,"\n")]='\0';
    int isWord=0;
    int count=0;

    for(int i=0;star[i]!='\0';i++){
        if(!isspace[i]&&isWord==0){
            count++;
            isWord++;
        }
        if(isspace[i]){
            isWord--;
        }
    }
    primtf("%d",count);
}