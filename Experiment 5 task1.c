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
