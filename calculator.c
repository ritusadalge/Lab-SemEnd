#include<stdio.h>
void main(){
  int a,b;
  char op;
int result;
printf("Enter operands");
  scanf(%d%d\n,&a,&b);
printf("Enter operator +,-,/,*\n");
scanf(%c,&op);
switch(op){
case '+':
  result=a+b;
  break;
case '-':
  result=a-b;
  break;
case '*':
  result=a*b;
  break;
case '/':
  result=a/b;
  break;
default:
  printf("Invalid input\n");
}
printf("Result=",result);
}

