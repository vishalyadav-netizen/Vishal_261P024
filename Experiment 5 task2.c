#include <stdio.h>
long long fibonacci(int n)
{
 if (n == 0)
 return 0;
 if (n == 1)
 return 1;
 return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(void)
{
 int n, i;
 printf("Enter number of terms (1-40): ");
 scanf("%d", &n);
 if (n < 1 || n > 40) {
 printf("Enter a term count from 1 to 40.");
 return 0;
 }
 printf("Fibonacci Series: ");
 for (i = 0; i < n; i++)
 printf("%lld ", fibonacci(i));
 return 0;
}
