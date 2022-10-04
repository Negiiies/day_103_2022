#include <stdio.h>
int stu_fact(int nb);
int main(void)
{
    int res;
    res = stu_fact(4);
    if (res == 24){
        puts("ok");
    }else{
        puts("nok");
    }
}
