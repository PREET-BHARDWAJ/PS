#include<stdio.h>
int main(){
int t;
printf("enter temp. in celsius: ");
scanf("%d",&t);
if(t<0)
   printf("Freezing weather");
if(t>=0 && t<10)
   printf("very cold weather");
if(t>=10 && t<20)
   printf("cold weather");
if(t>=20 && t<30)
   printf("normal in temp.");
if(t>=30 && t<40)
   printf("its hot");
if(t>=40)
   printf("its very hot");
return 0;

}
