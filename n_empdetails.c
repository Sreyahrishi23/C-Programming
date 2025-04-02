#include<stdio.h> 
typedef struct{
  char name[50];
  int id;
  float salary;
}employee;
  int main(){
    int n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    
    employee employees[n];
    for(int i=0;i<n;i++){
      printf("\nEnter employee details:");
      printf("\nName:");
      getchar();
      fgets(employees[i].name,sizeof(employees[i].name),stdin);
      printf("Employee ID:");
      scanf("%d",&employees[i].id);
      printf("Salary:");
      scanf("%f",&employees[i].salary);
    }
    printf("\nEmployee Details:");
    for(int i=0;i<n;i++){
      printf("\nEmployee:%d",i+1);
      printf("\nName: %s",employees[i].name);
      printf("ID:%d",employees[i].id);
      printf("\nSalary: %.2f\n",employees[i].salary);
      }
}      
