//write a program to demo of Case control statement-switch case
#include<stdio.h>
#include<conio.h>
main(){
int x=3;
clrscr();
switch(x){
case 1: printf("value is 1");
break;
case 2: printf("value is 2");
break;
case 3: printf("value is 3");
break;
default : printf("other than digit 1,2,3");
}
getch();
return 0;
}