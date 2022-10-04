// file: pow_test.c
// --snip--
#include <stdio.h>
int stu_pow(int nb, int power);
int main(void)
{int res;
res = stu_pow(2, 16);
 if (res == 65536){
puts("ok");
 }else{
puts("nok");
 }
}
// --snip--
