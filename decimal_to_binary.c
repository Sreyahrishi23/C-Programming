#include<stdio.h>
int main(){
  int num,bin=0,rem,i=1;
  printf("Enter an integer number to check:");
  scanf("%d",&num);
  while(num>0){
    rem=num%2;
    bin=rem*i+bin;
    num=num/2;
    i=i*10;
  }
  printf("The binary number is:%d",bin);
  return 0;
}
