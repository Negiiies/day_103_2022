#include <unistd.h>
#include <stdio.h>
void stu_putchar(char c)
{
    write(1, &c, 1);
}
int main(void)
{
    int i;
    i = 'a';
    while(i <= 'z')
        {
            stu_putchar(i);
            i = i + 2;
        }
    {
        stu_putchar('\n');
    }
}
