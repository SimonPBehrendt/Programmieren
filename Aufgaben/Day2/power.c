#define EPSILON 0.00001 //Präzisions-Konstante zum Vergleich von Doubles
#include<stdio.h>
#include<stdlib.h>
double askDouble(void);
int askNumber(void);
double power(double a, int b);
int compare_doubles(double a, double b);

int main(){
    //Hier Coden
    //Beispiel für printf
    double a = 3.45;
    printf("\nNasty little piggy:%.8lf", a);
    
    return 0;
}


//Erstelle die Funktion power()



//darfst du ignorieren
int askNumber(void){
    printf("\nType an Integer:");
    char arr[30];
    scanf("%29s", arr);
    return atoi(arr);
}
int compare_doubles(double a, double b){
    if((a-b)>EPSILON) return 1;
    if(((a-b)<EPSILON) && ((b-a)<EPSILON)) return 0;
    if((a-b)<EPSILON) return -1;
    return -1;
}
double askDouble(void){
    double d;
    printf("\nType a Double:");
    scanf("%lf", &d);
    printf("%.8f", d);
    return d;
}
