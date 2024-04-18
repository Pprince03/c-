#include<stdio.h>
void main(){
    //check wheather the given no is odd or even without using logical and airthmetic operator

    //First Method
    int a=154;
    if(a&1){
        printf("Odd");

    }
    else{
        printf("Even");
    }

    //Second method
    (a&1) ? printf("Odd") : printf("Even");
}