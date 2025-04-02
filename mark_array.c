#include<stdio.h>
typedef struct{
  char name[20];
  int rollNo;
  float mark1,mark2,mark3;
}student;
int main() {
  int n;
  int total=0;
  float average;
  printf("Enter the number of students: ");
  scanf("%d",&n);
  
  student students[n];
  for (int i=0;i<n;i++){
    printf("\nEnter student details: ");
    printf("\nName: ");
    getchar(); 
    fgets(students[i].name, sizeof(students[i].name), stdin);
    printf("Roll Number: ");
    scanf("%d", &students[i].rollNo);
    printf("Marks: ");
    printf("Subject 1: ");
    scanf("%f", &students[i].mark1);
    printf("Subject 2: ");
    scanf("%f", &students[i].mark2);
    printf("Subject 3: ");
    scanf("%f", &students[i].mark3);
  }
  for (int i = 0; i < n; i++) {
        total += students[i].mark1 + students[i].mark2 + students[i].mark3;
  }
  average=total/n;
  printf("Total marks:%d\n",total);
  printf("Average marks:%.2f",average);
}
