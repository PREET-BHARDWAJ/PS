#include<stdio.h>
int main(){
int a,b,c;
printf("enter sidesof triangle:");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c && c==a)
   printf("equilateral trangle");
else if(a==b || b==c || c==a)
    printf("isosceles triangle");
else
    printf("scalene triange");
return 0;
}
