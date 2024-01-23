#include <stdio.h>
int input();
void add (int a, int b,int *sum);
void output(int a,int b,int sum);
int main(){
    int num1, num2, sum;
    num1=result();
    num2=result();
    add(num1,num2,&sum);
    output(num1,num2,sum);
    return 0;
}
int input(){
    int num;
    printf("Enter the numbers: ");
    scanf("%d",&num);
    return num;
}

void add (int a, int b,int *sum){
    *sum=a+b;
}

void output(int a,int b,int sum){
    printf("the sum of %d and %d is: %d\n",a,b,sum);
}