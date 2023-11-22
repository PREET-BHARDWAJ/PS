#include<stdio.h>
int main(){
int c,a=0,tb,g;
printf("enter units:");
scanf("%d",&c);
if(c<=200)
  a=0;
else if(c>200 && c<=400)
    a=6*c;
else if(c>401 && c<=600)
    a=7*c;
else if(c>600)
    a=8*c;
g=a+220;
tb=g+(g*0.05);
printf("%d",tb);
return 0;
}
