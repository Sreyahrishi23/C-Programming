#include<stdio.h>
int main(){
  int row,col;
  printf("/nEnter number of rows and columns:");
  scanf("%d%d",&row,&col);
  int m1[row][col];
  printf("\nEnter the matrix");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&m1[i][j]);
    }
  }
  for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
      printf("%d\t",m1[j][i]);
    }
    printf("\n");
  }
  return 0;
}  
