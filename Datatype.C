//Write a program to demo of datatype in c
#include<stdio.h>
#include<conio.h>
main(){
int a;
float b;
double c;
char h;
clrscr();
printf("enter char");
scanf("%c",&h);
printf("%c",h);
printf("\nenter integer number");
scanf("%d",&a);
printf("\ninteger=%d",a);
printf("\nenter float number");
scanf("%f",&b);
printf("\nfloat=%f",b);
printf("\nenter double number");
scanf("%ld",&c);
printf("\ndouble=%lf",c);
getch();
return 0;
}