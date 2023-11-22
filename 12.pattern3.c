#include<stdio.h>
int main(){
int i,j,k,r;
printf("enter rows:");
scanf("%d",&r);
for(i=1;i<=r;i++){
for(j=0;j<r-i;j++){
printf(" ");}
for(k=i;k<2*i;k++){
printf("%d ",k);}
printf("\n");}
}
