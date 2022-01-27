#include<stdio.h>
int main(){
    int yard, i=1;
    printf("enter value for yard:\n");
    scanf("%d", &yard);
    if(yard>10)
    printf("High five");
    else if(yard<1)
    printf("shh");
    else {
        while(i<=yard){
            printf("Ra!");
            i++;
        }
    }
    return 0;
}