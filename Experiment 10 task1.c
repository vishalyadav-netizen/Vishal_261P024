#include <stdio.h>
struct Employee {
 int id;
 char name[50];
 float salary;
};
int main(void)
{
 struct Employee e;
 FILE *fp;
 int n, i;
 fp = fopen("employee.txt", "w");
 if (fp == NULL) {
 printf("Error opening file.\n");
 return 1;
 }
 printf("Enter number of employees: ");
 scanf("%d", &n);
 if (n < 1 || n > 100) {
 printf("Invalid number of employees.\n");
 fclose(fp);
 return 0;
 }
 for (i = 0; i < n; i++) {
 printf("\nEnter employee ID: ");
 scanf("%d", &e.id);
 printf("Enter employee name (one word): ");
 scanf("%49s", e.name);
 printf("Enter employee salary: ");
 scanf("%f", &e.salary);
 fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
 }
 fclose(fp);
 fp = fopen("employee.txt", "r");
 if (fp == NULL) {
 printf("Error reading file.\n");
 return 1;
 }
 printf("\nEMPLOYEE DATABASE\n");
 while (fscanf(fp, "%d %49s %f", &e.id, e.name, &e.salary) == 3) {
 printf("\nEmployee ID: %d", e.id);
 printf("\nEmployee Name: %s", e.name);
 printf("\nEmployee Salary: %.2f\n", e.salary);
 }
 fclose(fp);
 return 0;
}
