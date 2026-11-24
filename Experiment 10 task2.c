#include <stdio.h>
int main(void)
{
 int arr[100], n, i;
 int *ptr;
 printf("Enter number of elements (1-100): ");
 scanf("%d", &n);
 if (n < 1 || n > 100) {
 printf("Invalid number of elements.");
 return 0;
 }
 printf("Enter array elements:\n");
 for (i = 0; i < n; i++)
 scanf("%d", &arr[i]);
 ptr = arr;
 printf("Array in reverse order:\n");
 for (i = n - 1; i >= 0; i--)
 printf("%d ", *(ptr + i));
 return 0;
}

