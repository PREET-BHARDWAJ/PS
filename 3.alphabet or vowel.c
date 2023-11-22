#include<stdio.h>
int main(){
char ap;
printf("enter alphabet: ");
scanf("%s",&ap);
if(ap=='a' || ap=='e' || ap=='i' || ap=='o' || ap=='u')
    printf("alphabet is vowel");
else
printf("alphabet is consonant");
return 0;

}
