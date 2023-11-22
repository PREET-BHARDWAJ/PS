#include <stdio.h>
void main() {
    int m=1;
    while(m==1){
    int c,n,stack[20];
    printf("________MENU___________\n1 push\n2 pop\n3 display\n\n");
    printf("enter choice: ");
    scanf("%d",&c);
    printf("enter size of stack\n");
    scanf("%d",&n);
    int top=-1;
    switch(c){

        case 1:{
        int e;
        if(top>=n-1){
        printf("stack is full");
        }
        else{
         printf("enter element: ");
         scanf("%d",&e);
         top++;
         stack[top]=e;}
         printf("%d is pushed sucessfully\n",e);
         break;
        }
         case 2:{
         int deleteditem;
            if(top<=-1){
             printf("no elements in the stack\n");
         }
         else{
             deleteditem=stack[top];
             top=top-1;
             }
         printf("delected item is:%d\n",deleteditem);
         break;
         }
         case 3:{
         if(top>=0){
         for(int i=0;i<=top;i++)
            printf("%d",stack[i]);}
         else
           printf("stack is empty\n");
         break;}
         case 4:{
         printf("__enter correct choice__");
         break;
        }}
        printf("wants to add more ?\nif yes press 1");
        scanf("%d",&m);


}}
