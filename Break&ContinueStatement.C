//write a program to demo of case control statement -break & continue
#include<stdio.h>
#include<conio.h>
main(){
int i;
clrscr();
for(i=0;i<=5;i++){
if(i==4){
break;
}
printf("\n break = %d",i);
}
for(i=0;i<=5;i++){
if(i==4){
continue;
}
printf("\n continue =%d",i);
}
getch();
return 0;
}