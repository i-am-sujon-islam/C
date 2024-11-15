
#include<stdio.h>

int main(){

int i;
float f;
double d;
char c;

printf("size of int = %d\n", sizeof(i));
printf("size of float = %d\n", sizeof(f));

printf("size of double = %d\n", sizeof(d));
printf("size of char = %d\n", sizeof(c));

printf("Enter a Ascii number-");
scanf("%d",&i);
printf("Ascii %c \n",i);

printf("Enter any character: ");
gets(c);
printf("Ascii value is %d \n",c);



}
