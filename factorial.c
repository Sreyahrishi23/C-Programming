#include<stdio.h>
int main(){
  int num,i,product=1;
  printf("\n Enter a number:");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    product=product*i;
  }
  printf("%dfactorial",product);
  return 0;
}  
