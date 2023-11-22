#include<stdio.h>
int main(){
int i,j,r;
printf("enter rows:");
scanf("%d",&r);
char k=65;
for(i=1;i<=r;i++){
for(j=i+1;j<2*i;j++){

printf("%c",k++);
}
printf("\n");}
}

