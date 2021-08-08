//write a program to demo of Decision making - nested if ----else
#include<stdio.h>
#include<conio.h>
main(){
int x=10,y=20,z=7;
clrscr();
if(x>y)
{
if(x>z){
printf("x is greater");
}
else{
printf("z is greater");
}
}
else{
if(y>z){
printf("y is greater");
}
else{
printf("z is greater ");
}
}
getch();
return 0;
}

