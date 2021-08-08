 //Write a program to demo of constant in c language
#include<stdio.h>
#include<conio.h>
main(){
int x=10;
const int y=20;
clrscr();
printf("value of x is %d",++x);
printf("value of y is %d",++y);//compile time error //can't modify constant variable y
getch();
return 0;
}