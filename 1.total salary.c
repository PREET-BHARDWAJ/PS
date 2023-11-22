#include<stdio.h>
#include<stdlib.h>
int main(){
int SA,BS,TS,hra,da,allow,pf;
char grade;
printf("enter the basic salary");
scanf("%d",&BS);
hra=BS*0.2;
da=BS*0.5;
pf=BS*0.11;
SA=hra+da+BS;
printf("hra=%d da=%d pf=%d\n",hra,da,pf);
printf("grade:");
scanf("%s",&grade);
if(grade=='A'){
    allow=1700;}
else if(grade=='B'){
    allow=1500;}
else{
    allow=1300;}
printf("allow=%d\n",allow);
TS=(SA+allow)-pf;
printf("%d",TS);
return 0;
}
