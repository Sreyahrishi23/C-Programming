#include<stdio.h>
int main(){
    int choice;
    printf("\n1 for maths\n2 for chemistry\n3 for english\n4 for physics\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("You have selected maths");
            break;
        case 2:
            printf("You have selected chemistry");
            break;
        case 3:
            printf("You have selected english");
            break;
        case 4:
            printf("You have selected physics");
            break;
        default:
            printf("Please choose a number from 1 to 4!");

    }
    return 0;
}
