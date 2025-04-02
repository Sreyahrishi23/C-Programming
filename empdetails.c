#include<stdio.h>
struct employee{
  char name[50];
  int ID;
  float salary;
}
  main(){
  struct employee e1;
  printf("\nEnter the employee name:");
  fgets(e1.name,sizeof(e1.name),stdin);
  printf("\nEnter employee ID:");
  scanf("%d",&e1.ID);
  printf("\nEnter the salary:");
  scanf("%f",&e1.salary);
  printf("\nEmployee details");
  printf("\nEmployee name:%s",e1.name);
  printf("Employee ID:%d",e1.ID);
  printf("\nEmployee salary:%f",e1.salary);
}  

  
