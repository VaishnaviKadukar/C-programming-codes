//write a program in a c to demo of symbolic constant
#include<stdio.h>
#include<conio.h>
#define a 67; //value of a remain constant in the program
main(){
int ans=10;
ans+=a;
printf("addition is %d",ans);
getch();
return 0;
}