/*WAP to input name, roll number and marks in 5 subjects for n number of students. Write
functions to:-*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Student{
    char name[30];
    int roll;
    int marks[5];
    int totalMarks;
    float percentage;
};
// a. Find total marks and percentage of all n students.
void tmps(struct Student students[],int nStudents){
    int i, m;
    for (i = 0; i < nStudents; i++){
        students[i].totalMarks = 0;
        students[i].percentage = 0.0;
        for (m = 0; m < 5; m++){
            students[i].totalMarks += students[i].marks[m];
            students[i].percentage += students[i].marks[m] * 0.2;
        }
    }
}
// b. Display details of a student with a given roll number.
void dds(struct Student students[], int nStudents, int rollNumber){
    int i, m;
    for (i = 0; i < nStudents; i++){
        if (rollNumber == students[i].roll){
            printf("The student's name: %s\n", students[i].name);
            printf("The student's roll number: %d\n", students[i].roll);
            printf("The student's marks\n");
            for (m = 0; m < 5; m++){
                printf("%d ", students[i].marks[m]);
            }
            printf("\nThe student's total marks: %d\n", students[i].totalMarks);
            printf("The student's percentage: %.2f\n", students[i].percentage);
            printf("\n");
            break;
        }
    }
}
// c. Display the details for all the students having percentage in a given range.
void ddspr(struct Student students[], int nStudents, float percentage1, float percentage2){
    int i, m;
    for (i = 0; i < nStudents; i++){
        if (students[i].percentage >= percentage1 && students[i].percentage <= percentage2){
            printf("The student's name: %s\n", students[i].name);
            printf("The student's roll number: %d\n", students[i].roll);
            printf("The student's marks\n");
            for (m = 0; m < 5; m++){
                printf("%d ", students[i].marks[m]);
            }
            printf("\nThe student's total marks: %d\n", students[i].totalMarks);
            printf("The student's percentage: %.2f\n", students[i].percentage);
            printf("\n");
        }
    }
}
// d. Sort the array in ascending order of marks.
void aom(struct Student students[], int nStudents){
    int i, j, m;
    for (i = 0; i < nStudents - 1; i++){
        for (j = 0; j < nStudents - i - 1; j++){
            if (students[j].totalMarks > students[j + 1].totalMarks){
                // swap temp and elements[i]
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < nStudents; i++){
        printf("The student's name: %s\n", students[i].name);
        printf("The student's roll number: %d\n", students[i].roll);
        printf("The student's marks\n");
        for (m = 0; m < 5; m++){
            printf("%d ", students[i].marks[m]);
        }
        printf("\nThe student's total marks: %d\n", students[i].totalMarks);
        printf("The student's percentage: %.2f\n", students[i].percentage);
        printf("\n");
    }
}
void main(){
    struct Student students[100];
    int nStudents, i, m;
    int rollNumber;
    float percentage1;
    float percentage2;
    printf("Enter the number of students: ");
    scanf("%d", &nStudents);
    for (i = 0; i<nStudents; i++){
        fflush(stdin);
        printf("Enter the student %d name: ",i+1);
        scanf("%s", students[i].name);
        printf("Enter the student %d roll number: ",i+1);
        scanf("%d", &students[i].roll);
        for (m = 0; m < 5; m++){
            printf("Enter the student %d mark %d: ",i+1 ,(m + 1));
            scanf("%d", &students[i].marks[m]);
        }
        printf("\n");
    }
    tmps(students, nStudents);
    printf("Enter the student's roll number to search: ");
    scanf("%d", &rollNumber);
    dds(students, nStudents, rollNumber);
    printf("Enter the student's percentage 1 to search: ");
    scanf("%f", &percentage1);
    printf("Enter the student's percentage 2 to search: ");
    scanf("%f", &percentage2);
    ddspr(students, nStudents, percentage1, percentage2);
    printf("\nSort the array in ascending order of marks.\n");
    aom(students, nStudents);
    printf("\n");
    getch();
    getch();
}