#include <stdio.h>
int main(void)
{
 int arr[100], n, i, largest;
 printf("Enter number of elements (1-100): ");
 scanf("%d", &n);
 if (n < 1 || n > 100) {
 printf("Invalid number of elements.");
 return 0;
 }
 printf("Enter array elements:\n");
 for (i = 0; i < n; i++)
 scanf("%d", &arr[i]);
 largest = arr[0];
 for (i = 1; i < n; i++) {
 if (arr[i] > largest)
 largest = arr[i];
 }
 printf("Largest element = %d", largest);
 return 0;
}
