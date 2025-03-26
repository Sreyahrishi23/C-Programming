#include<stdio.h>
int power(int num1,int num2){
  if(num2==0){
    return 1;
  }
  else{
    return num1*power(num1,num2-1);
  }
}
int main(){
  int num1,num2,result;
  printf("Enter base number:");
  scanf("%d",&num1);
  printf("Enter power number:");
  scanf("%d",&num2);
  result=power(num1,num2);
  printf("The result is %d",result);
  return 0;
}  
  
