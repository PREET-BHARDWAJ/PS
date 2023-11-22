#include<stdio.h>
int main(){
int i,j,r;
printf("enter rows:");
scanf("%d",&r);
char k='A';
for(i=1;i<=r;i++){
for(j=1;j<=i;j++){
printf("%c",k);}
k=k+1;
printf("\n");
}
}
