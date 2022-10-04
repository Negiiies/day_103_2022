#include <unistd.h>
void stu_putchar(char c)
{
    write(1, &c, 1);
}
int main(void)
{
    int comb;
    int dés;
    dés = '1';
    comb = '1';
    while(dés <= '6')
        {
            if (comb <= '6') {
                stu_putchar(dés);
                stu_putchar('-');
                stu_putchar(comb);
                stu_putchar(' ');
                comb += 1;
        }else{
                dés += 1;
                comb = dés;
            }
            }
            stu_putchar('\n');
}
