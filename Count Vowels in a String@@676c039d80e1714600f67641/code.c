#include <stdio.h>
#include <string.h>
int main(){
    char star[100];
    fgets(star,sizeof(star),stdin);
    star[strcspn(star,"\n")]='\0';
    int count=0;
    int len=strlen(star);
    for(int i=0;i<len;i++){
        star[i]=tolower(star[i]);
        if(star[i]=='i'||star[i]=='e'||star[i]=='a'||star[i]=='o'||star[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
}