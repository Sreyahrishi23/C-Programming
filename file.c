#include<stdio.h>
int main(){
  FILE *fp;
  fp=fopen("file.txt","w"); //Opens the file in write mode
  putc('A',fp); //Writes a char into the file
  fclose(fp); //Closes the file
  fp=fopen("file.txt","r"); //Opens the file in read mode
  char ch=getc(fp); //Reads the char from the file
  printf("%c",ch);
  fclose(fp); //Closes the file
  return 0;
  
