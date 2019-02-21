#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int i;
  void print_char();
  for ( i=0; i<5;i++)
    print_char('b');
  return 0;
}
void print_char(c)//void print_char(char c)
char c;
{
  printf("%c\n",c);
}
//gcc ch6_5.c -o ch6_5.a