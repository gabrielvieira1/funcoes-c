#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
 int result_1 = max(a, b);
 int result_2 = max(c, d);

 if (result_1 > result_2)
  return result_1;

 return result_2;
}

int max(int a, int b)
{
 if (a > b)
  return a;

 return b;
}

int main()
{
 int a, b, c, d;
 scanf("%d %d %d %d", &a, &b, &c, &d);
 int ans = max_of_four(a, b, c, d);
 printf("%d", ans);

 return 0;
}