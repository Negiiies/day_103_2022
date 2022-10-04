int stu_pow(int nb, int power)
{
    int i;
    i = 1;
    while(power) {
        if (power & 1)
            i *= nb;
        nb *= nb;
        power = power >> 1;
    }
    return (i);
}
