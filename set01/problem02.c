//2. Write a C program to add two numbers.
#include <stdio.h>
int main(){
    int num1,num2;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    int sum=num1+num2;
    printf("sum:%d\n",sum);
    return 0;
}