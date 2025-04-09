#include<stdio.h>
int main(){
  FILE *fp1,fp2,fp3;
  fp1=fopen("number.txt","r");
  int num;
  while(!feof(fp1)){
    fscanf(fp1,"%d",&num);
    printf("%d\t",num);
  }
  fclose(fp1);
  return 0;
}  
