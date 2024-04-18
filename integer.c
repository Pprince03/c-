#include<stdio.h>
void main(){
    unsigned short int a=1;;
    while(a){
        printf("%d\t",a);
        a++;
    }

    signed short int a=1;
    while(a){
        printf("%d\t",a);
        a++;;
    }

}