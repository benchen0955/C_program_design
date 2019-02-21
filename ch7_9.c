#include<stdio.h>
#include<stdlib.h>
int f(int i);
int v;
int main()
{
    int i=2;
    v=3;
    printf("i=%d, v=%d, f()=%d\n",i,v,f(i));
    return 0;
}
//gcc ch7_9.c ch79.c -o ch7_9.a