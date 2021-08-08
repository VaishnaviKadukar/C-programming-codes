//write a program to demo of decision making -ladder if--else
#include<stdio.h>
#include<conio.h>
main(){
int mark=100;
clrscr();
if(mark<=60){
printf("not good mark");
}
else if(mark<=70){
printf("avrage mark");
}
else if(mark<=85){
printf("good mark");
}
else{
printf("outstanding");
}
getch();
return 0;
}