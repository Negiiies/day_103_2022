#include <unistd.h>
void stu_putchar(char c)
{
    write(1, &c, 1);
}
void stu_repeat_char(char c, int n)
{
    int nb = 0;
    while(nb < n)
        {
            stu_putchar(c);
            stu_putchar('\n');
            nb += 1;
        }
}
int main(void)
{
    stu_repeat_char(40, 10);
}
