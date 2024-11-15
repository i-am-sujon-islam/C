#include<stdio.h>


int main (){

// int num1,num2;
// printf("Please Input first number and click inter -");
// scanf("%d", &num1);
// printf("Please Input second number nad click enter - ");
// scanf("%d",&num2);

// printf("The number are %d %d \n", num1, num2);

char name[50];
printf("Enter your name: ");
fgets(name, sizeof(name), stdin);

size_t len = strlen(name);
if(name[len-1]== '\n') {
    name[len - 1] = '\0';
};

printf("Hello ");
puts(name);




};
