#include<stdio.h>
int main(){
  FILE *fp;
  char ch;
  fp=fopen("file.txt","w");
  while(ch=getc(stdin)!='z'){
    putc(ch,fp);
  }
  fclose(fp);
  return 0;
