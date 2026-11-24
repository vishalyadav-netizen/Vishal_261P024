#include <stdio.h>
#include <string.h>
int main(void)
{
 char str[100];
 int i, length, flag = 1;
 printf("Enter a string (no spaces): ");
 scanf("%99s", str);
 length = (int)strlen(str);
 for (i = 0; i < length / 2; i++) {
 if (str[i] != str[length - i - 1]) {
 flag = 0;
 break;
 }
 }
 if (flag)
 printf("String is Palindrome");
 else
 printf("String is Not Palindrome");
 return 0;
}
