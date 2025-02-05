#include<stdio.h>
int main(){
  int num,i,limit,n,small,big;
  printf("Enter number of elements:");
  scanf("%d",&n);
  int array[n];
  printf("Enter the elements:");
  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  small=array[0];
  big=array[0];
  for(i=0;i<n;i++){
    if(array[i]>big){
      big=array[i];
    }
    if(array[i]<small){
      small=array[i];
    }
  }
  printf("\nThe largest number=%d",big);
  printf("\nThe smallest number=%d",small);
  return 0;
  }
  
  
