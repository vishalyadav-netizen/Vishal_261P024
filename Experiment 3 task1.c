#include <stdio.h>
int main(void)
{
 int choice, marks = 0, entered = 0;
 char name[50];
menu:
 printf("\nSTUDENT GRADE AND RESULT SYSTEM\n");
 printf("1. Enter Student Details\n");
 printf("2. Check Grade and Result\n");
 printf("3. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 printf("Enter student name: ");
 scanf("%49s", name);
 printf("Enter marks (0-100): ");
 scanf("%d", &marks);
 if (marks < 0 || marks > 100) {
 printf("Invalid marks.\n");
 entered = 0;
 } else {
 entered = 1;
 }
 goto menu;
 case 2:
 if (!entered) {
 printf("Enter valid student details first.\n");
 goto menu;
 }
 printf("Student Name: %s\n", name);
 printf("Marks: %d\n", marks);
 /* Grade boundaries are sample assumptions. */
 if (marks >= 90) printf("Grade: A\n");
 else if (marks >= 75) printf("Grade: B\n");
 else if (marks >= 60) printf("Grade: C\n");
 else if (marks >= 40) printf("Grade: D\n");
 else printf("Grade: F\n");
 if (marks >= 40) printf("Result: Pass\n");
 else printf("Result: Fail\n");
 goto menu;
 case 3:
 printf("Thank you!\n");
 break;
 default:
 printf("Invalid choice.\n");
 goto menu;
 }
 return 0;
}
