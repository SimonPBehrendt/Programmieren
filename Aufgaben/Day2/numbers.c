#include<stdio.h>
#include<stdlib.h>
int askNumber(void);

int main(){
    //hier darfst du Coden
    
    return 0;
}




//EINFACH IGNORIEREN
int askNumber(void){
    printf("\nType an Integer:");
    char arr[30];
    scanf("%29s", arr);
    return atoi(arr);
}