#include<stdio.h>
void main(){
    //program to find the sum of two numbers without using + operator
    //1st method
    int a=6,b=7;
    int c=-(-a-b);
    printf("%d \n",c);

    //2nd method
    printf("%d",a-(~b)-1);
    //3rd method

    printf("%d",abs(-a-b));
}