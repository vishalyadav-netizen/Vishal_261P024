#include <stdio.h>
int main()
{
 float physics, chemistry, maths, average;
 printf("Enter Physics marks (0-100): ");
 scanf("%f", &physics);
 printf("Enter Chemistry marks (0-100): ");
 scanf("%f", &chemistry);
 printf("Enter Maths marks (0-100): ");
 scanf("%f", &maths);
 if (physics < 0 || physics > 100 ||
 chemistry < 0 || chemistry > 100 ||
 maths < 0 || maths > 100) {
 printf("Invalid marks. Enter marks between 0 and 100.");
 return 0;
 }
 average = (physics + chemistry + maths) / 3.0f;
 printf("Average Marks = %.2f\n", average);
 (average >= 50.0f) ?
 printf("Eligible for Admission") :
 printf("Not Eligible for Admission");
 return 0;
}
