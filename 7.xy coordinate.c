#include<stdio.h>
int main(){
int x,y;
printf("enter XY cordinates: ");
scanf("%d%d",&x,&y);
if(x==0 && y==0)
printf("at centre");
if(x>0 && y>0)
printf("1st quardrant");
if(x<0 && y>0)
printf("2nd quadrant");
if(x<0 && y<0)
printf("3rd quadrant");
if(x>0 && y<0)
printf("4rth quadrant");
return 0;
}
