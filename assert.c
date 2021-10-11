#include <stdio.h>
#include <assert.h>  //with assert we can easely test in c

void check(int, int);

int main(void){
    
    check(9, 4);
    printf("Successfully finished!");
}

void check(int a, int b){

    assert(a > 10);
    assert(b < 5);
}