#include <stdio.h>
int main(void)
{
 int start, end, i, temp;
 long long sum = 0;
 printf("Enter starting number: ");
 scanf("%d", &start);
 printf("Enter ending number: ");
 scanf("%d", &end);
 if (start > end) {
 temp = start;
 start = end;
 end = temp;
 }
 for (i = start; ; i++) {
 if (i % 2 != 0)
 sum += i;
 if (i == end)
 break;
 }
 printf("Sum of odd numbers = %lld", sum);
 return 0;
}
