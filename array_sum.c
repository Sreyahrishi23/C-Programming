#include<stdio.h>
int array_sum(int[],int);
int main(){
  int limit,sum;
  printf("Enter the limit");
  scanf("%d",&limit);
  int array[limit];
  printf("Enter the array elements");
  for(int i=0;i<limit;i++){
    scanf("%d",&array[i]);
    }
  sum=array_sum(array,limit);
  printf("The sum of elements is %d",sum);
  return 0;
}
int array_sum(int array[],int limit){
  int s=0;
  for(int i=0;i<limit;i++){
    s=s+array[i];
  }
  return s;
}  

