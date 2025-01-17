#include <stdio.h>
int main() {
    int i ;
    int j ;
    int k;
    scanf("%d %d %d",&i,&j,&k);
    float l=(i+j+k)/3;
    
    printf("Average: %.2f", l);
    return 0;
}