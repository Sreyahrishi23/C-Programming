#include<stdio.h>
int main(){
    int num1,num2,choice,result;
    printf("1 is addition\n2 is subtraction\n3 is multiplication\n4 is division");
    printf("\nEnter first number:");
    scanf("%d",&num1);
    printf("\nEnter second number:");
    scanf("%d",&num2);
    printf("Enter you choice:");
    scanf("%d",&choice);
    if(choice==1){
        result=num1+num2;
        printf("The result is:%d",result);
        }
    else if(choice==2){
        result=num1-num2;
        printf("The result is:%d",result);
        }
    else if(choice==3){
        result=num1*num2;
        printf("The result is:%d",result);
        }
    else if(choice==4){
        result=num1/num2;
        printf("The result is:%d",result);
        }
    else{
        printf("Please select a number from 1 to 4!");
        }
    return 0;
 }



