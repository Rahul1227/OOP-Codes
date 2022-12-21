#include <stdio.h>
struct data{
char name[15];
int roll;
int marks[5];
}s1;
int main(){
printf("Enter the Name: ");
scanf("%s", &s1.name);
printf("Enter the Roll Number: ");
scanf("%d", &s1.roll);
for(int i=0; i<5; i++){
printf("Enter the marks of the Subject %d: ", i+1);
scanf("%d", &s1.marks[i]);
}
printf("\nDisplaying Details\n");
printf("Student Name= %s\n", s1.name);
printf("Student Roll Number= %d\n", s1.roll);
for(int i=0;i<5;i++){
printf("Student mark in subject %d = %d\n", i+1, s1.marks[i]);
}
return 0;
}