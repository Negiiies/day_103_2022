int stu_pow(int nb, int power)
{
    int i;
    int f;
    i = 1;
    while(i < power) {
        nb = nb * k;
        i += i;
        if (nb > 214748367){
            return 0;
        }
    }
    return (nb);
}
