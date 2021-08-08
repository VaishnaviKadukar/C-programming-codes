//write a program to demo of jumping statement -backward jump
#include<stdio.h>
#include<conio.h>
main(){
double n,result;
clrscr();
enter:
printf("\nenter a number");
scanf("%lf",&n);
if(n<0.0)
{
printf("\ndont enter negative number");
goto enter;
}
result=(pow(n,2));
printf("%lf",result);
getch();
return 0;
}