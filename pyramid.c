#include<stdio.h>
int main(){
  int i,j,n;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<n;j++){
      printf(" ");
    }
    for(j=i;j<n;j++){
      printf("*");
    }  
    printf("\n");
  }
  return 0;
}  
