#include <stdio.h>
<<<<<<< HEAD

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main() {

    int num1, num2, result;

    num1 = input();
    num2 = input();

    result = add(num1, num2);

    output(num1, num2, result);

    return 0;
}

int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int add(int a, int b) {
    return a + b;
}

void output(int a, int b, int sum) {
    printf("Sum of %d and %d is: %d\n", a, b, sum);
=======
int input();
int add(int a,int b);
void output(int a,int b, int sum);

int main(){
    int num1, num2,result;
    num1=input();
    num2=input();
    result = add(num1, num2);
    output(num1,num2,result);
    return 0;
}
int input(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    return num;
}
int add(int a,int b){
    return a+b;
}
void output(int a,int b, int sum){
    printf("Sum of%d and %d is:%d\n",a,b,sum);
>>>>>>> f8f32cd79edff04b8c10891b6cd7a64ef01db0da
}