#include<stdio.h>
int multiply(int num1,int num2);
int main(){
  int num1,num2;
  printf("Enter the first number:");
  scanf("%d",&num1);
  printf("Enter the second number:");
  scanf("%d",&num2);
  multiply(num1,num2);
  return 0;
}
int multiply(int num1,int num2){
  int result;
  result=num1*num2;
  printf("The product of %d and %d is %d",num1,num2,result);
}  
