#include <unistd.h>
void stu_putchar(char c)
{
    write(1, &c, 1);
}
int main(void)
{
    int i;
    i = 'A';
    while (i !='[')
        {
            if (i < 92)
                {
                    stu_putchar(i);
                    i = i + 33;
                }else{
                stu_putchar(i);
                i = i-31;
            }
        }
}
