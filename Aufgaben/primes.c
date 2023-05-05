#include<stdio.h>
#include<stdbool.h>
bool is_prime(int p);
void test_bool(bool a, bool b, int line);
void test_i(int a, int b, int line);
void test_is_prime(void);
int count_primes(int a, int b);
void test_count_primes(void);

//Main Funktion hier passiert der Spaß
int main(void){

    //implementier mal LEL
    test_is_prime();
    test_count_primes();
    return 0;
}

//Funktion soll entscheiden ob p eine Primzahl ist
//und true falls ja, false falls nein zurückgeben
bool is_prime(int p){
//implementier wie ein löwe wallah!
    return false;
}

//Funtkion soll ein Intervall I = [a,b] bekommen
//und die Anzahl an Primzahlen in I zurückgeben
int count_primes(int a, int b){
//implementier wie ein Bär yamaniak!
}


//Testfunktionen
void test_count_primes(void){
    test_i(count_primes(3,9),3, __LINE__);
    test_i(count_primes(0,0),0, __LINE__);
    test_i(count_primes(1,7),4, __LINE__);
    test_i(count_primes(-10,3),2, __LINE__);
}
void test_is_prime(void){
    test_bool(is_prime(3), true, __LINE__);
    test_bool(is_prime(7), true, __LINE__);
    test_bool(is_prime(1), false, __LINE__);
    test_bool(is_prime(6), false, __LINE__);
    test_bool(is_prime(9), false, __LINE__);
    test_bool(is_prime(17), true, __LINE__);
    test_bool(is_prime(-132), false, __LINE__);
    test_bool(is_prime(97), true, __LINE__);
}
void test_i(int a, int b, int line){
    if(a == b){
        printf("\nline: %d Test successfull, expected %d got %d", line, b,a);
    } else {
        printf("\nline: %d Test failed, expected %d got %d",line, b,a);
    }
}
void test_bool(bool a, bool b, int line){
    if(a == b){
        printf("\nline: %d Test successfull, expected %s got %s", line, b? "true":"false", a? "true":"false");
    } else {
        printf("\nline: %d Test failed, expected %s got %s", line, b? "true":"false", a? "true":"false");
    }
}