//C program to read a file and count the number of words, number of lines and number of characters in it.

#include<stdio.h>
int main(){
  FILE *fp;
  int wordCount=0;
  fp=fopen("input_file.txt","r");
  char ch;
  while(fscanf(fp,"%c",&ch)==1){
    if(ch==' ' || ch=='.'){
      wordCount++;
    }
  }
  printf("Word Count=%d",wordCount);
  fclose(fp);
  return 0;
}  
 
