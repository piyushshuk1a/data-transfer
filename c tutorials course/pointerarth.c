#include<stdio.h>
void main()
{
    int a[] = {10, 11, -1, 56, 67, 54};
    int *p, *q;
    p = a;
    q = &a[0] +3;
    printf("%d %d %d\n", (*p)++, (*p)++, *(++p));
 printf("%d\n", *p);

printf("%d\n", (*p)++);
printf("%d\n", (*p)++);
printf("%d", (*(q+2))--);













}
