#include <stdio.h>
int main()
{
int t1 = 0, t2 = 1, nextTerm, n = 10;
printf("Fibonacci Series: %d, %d, ", t1, t2);
for (int i = 3; i <= n; ++i)
{
nextTerm = t1 + t2;
printf("%d, ", nextTerm);
t1 = t2;
t2 = nextTerm;
}
return 0;
}