#include<stdio.h>
int main(){
  int limit,item,i,k=0;
  printf("\nEnter the number of elements:");
  scanf("%d",&limit);
  int array[limit];
  printf("\nEnter elements:");
  for(i=0;i<limit;i++){
    scanf("%d",&array[i]);
  }
  printf("\nEnter the element to search:");
  scanf("%d",&item);
  for(i=0;i<limit;i++){
    if(item==array[i]){
    k=1;
    break;
    }
    }
     if(k==1){
     printf("\nThe given element found at position:%d",i);
      
    }
    else{
      printf("\nElement not found");
    }  
  
  return 0;
}  
