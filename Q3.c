#include<stdio.h>
#include<stdlib.h>
struct employee{
int id;
char name[20];
int age;
int basicsalary;
};
int main(){
struct employee *ptr;
int n;
float DA,HRA;

float Gross_salary;
printf("Enter the number of Employee: ");
scanf("%d",&n);
ptr=(struct employee*)malloc(n*sizeof(struct employee));
for(int i=0;i<n;i++){
printf("\nEnter the ID of Employee %d: ", i+1);
scanf("%d",&(ptr+i)->id);
printf("\nEnter the Employee %d name: ", i+1);
scanf("%s",(ptr+i)->name);
printf("\nEnter the employee %d age: ", i+1);
scanf("%d",&(ptr+i)->age);
printf("\nEnter the basic salary of the employee %d: ", i+1);
scanf("%d",&(ptr+i)->basicsalary);
}
for(int k=0;k<n;k++){
DA=0.8*((ptr+k)->basicsalary);
HRA=0.1*((ptr+k)->basicsalary);
Gross_salary=(ptr+k)->basicsalary+DA+HRA;
printf("DA : %f\n",DA);
printf("HRA : %f\n",HRA);
printf("gross_salary : %f\n",Gross_salary);
printf("\n");
}
printf("The Employees data are as follows\n");
for(int j=0;j<n;j++){
printf("%d\t%s\t%d\t%d\n",((ptr+j)->id),((ptr+j)->name),((ptr+j)->age),((ptr+j)->basicsalary));
}
return 0;
}