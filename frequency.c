#include<stdio.h>
int main(){
    char str[80];
    int count = 0;
    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    printf("Letter count: %d\n",count-1);
    return 0;
}    
