//write a program in c to demo of character set
#include<stdio.h>
#include<conio.h>
main(){
//source character set
char a='A'; //alphabet character set A-Z, a-z
char b='6';//digit character set 0-9
char c='@';//special charcter set like # ,$,%,&,^
clrscr();
printf("\n %c %c %c",a,b,c);//\n is a whitespace characterset
getch();
return 0;
}