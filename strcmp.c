#include<stdio.h>
#include<string.h>
int main(){
  char str1[30];
  char str2[30];
  
  printf("Enter first sentence:");
  fgets(str1,sizeof(str1),stdin);
  printf("Enter second sentence:");
  fgets(str2,sizeof(str2),stdin);
  int compare=strcmp(str1,str2);
  if(compare==0){
    printf("The two sentences are equal\n");
  }
  else{
    printf("The two sentences are not equal\n");
  }
  return 0;
}  
