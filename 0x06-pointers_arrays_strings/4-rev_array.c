#include "main.h"

/**
 *reverse_array - reverses integer in an array
 *@a: pointer of integer array
 *@n: number of element in the array
 */
void reverse_array(int *a, int n)
{
int l, m, p;
l = n - 1;
for (m = 0; m < n / 2; m++)
{
p = a[m];
a[m] = a[l];
a[l--] = p;
}
}
