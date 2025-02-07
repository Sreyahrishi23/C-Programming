#include<stdio.h>
int main(){
  int row,col;
  printf("\nEnter row and column values:");
  scanf("%d%d",&row,&col);
  int m1[row][col],m2[row][col],m3[row][col];
  printf("\nEnter the first matrix:");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&m1[i][j]);
    }
  }
  printf("\nEnter the second matrix:");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&m2[i][j]);
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      m3[i][j]=m1[i][j]+m2[i][j];
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",m3[i][j]);
    }
  printf("\n");
  }  
      
  return 0;
}  
