#include <unistd.h>
 #include <stdio.h>
 void stu_putchar(char c)
 {
     write(1, &c, 1);
 }
 int main(void)
 {
     int i;
     i = '9';
     while(i >= '0')
 {
         stu_putchar(i);
         i = i - 1;
     stu_putchar('\n');
  }
 }
