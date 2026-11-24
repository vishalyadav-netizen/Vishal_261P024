#include <stdio.h>
int isPrime(int n)
{
 int i;
 if (n <= 1)
 return 0;
 for (i = 2; i <= n / i; i++) {
 if (n % i == 0)
 return 0;
 }
 return 1;
}
int main(void)
{
 int start, end, i, temp;
 printf("Enter starting number: ");
 scanf("%d", &start);
 printf("Enter ending number: ");
 scanf("%d", &end);
 if (start > end) {
 temp = start;
 start = end;
 end = temp;
 }
 printf("Prime numbers are: ");
 for (i = start; ; i++) {
 if (isPrime(i))
 printf("%d ", i);
 if (i == end)
 break;
 }
 return 0;
}
