//write a program to demo of jumping statement-forward jump
#include<stdio.h>
#include<conio.h>
main(){
const int n=5;
int i;
double input,sum=0.0;
clrscr();
for(i=1;i<=n;i++){
printf("enter a number");
scanf("%lf",&input);
if(input<0.0){
printf("don't enter negative number");
goto addition;
}
sum+=input;
}
addition:
printf("\n your sum=%lf",sum);
getch();
return 0;
}