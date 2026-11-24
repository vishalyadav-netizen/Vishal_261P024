#include <stdio.h>
int main(void)
{
 int n, i;
 long long a = 0, b = 1, c;
 printf("Enter number of terms (1-90): ");
 scanf("%d", &n);
 if (n < 1 || n > 90) {
 printf("Enter a term count from 1 to 90.");
 return 0;
 }
 printf("Fibonacci Series: ");
 for (i = 1; i <= n; i++) {
 printf("%lld ", a);
 c = a + b;
 a = b;
 b = c;
 }
 return 0;
}
Sample input: Enter the values shown in the sample output.
Expected output:
Enter number of terms (1-90): 7
Fibonacci Series: 0 1 1 2 3 5 8
Task 2 — Recursive method
Manual task: Generate Fibonacci series for N terms using the recursive method.
Write this complete code under the manual heading “Program with Output:”
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
