#include<stdio.h>

int main() {
    //Arithmetic operators
    // +,-,*,/,%,++,--

    int num1 = 30;
    int num2 = 15;

    printf("Total num1+num2 = %d\n",num1+num2);
    printf("num1 - num2 = %d\n",num1 - num2);
    printf("num1 * num2 = %d\n",num1*num2);
    printf("num1 / num2 = %d\n",num1/num2);
    printf("num1 modulas num2 = %d",num1%num2);

    //Asignment Operator
    // =,+=,-=,*=,/=,%=,&=,|=,^=,>>=,<<=

    printf("Total num2 = num2 + num1 = %d\n",num2+=num1);
    printf("Total num1 = num1 - num1 = %d\n",num1-=num2);
    printf("Total num1 = num2 * num1 = %d\n",num2+=num1);
    printf("Total num2 = num2 / num1 = %d\n",num2+=num1);

    // Comparison Operators
    // ==, !=, >, >=,<=
    int a = 30,b= 25,c=15;
    if(a>b){
        printf("%d is grater then %d\n",a,b);
    };

    //logical operators
    // && || !
    if(a>b && a>c){
        printf("a is big number");
    } else if(b>a && b>c){
        printf("b is big number");
    } else {
        printf("c is big number");
    };
 
}