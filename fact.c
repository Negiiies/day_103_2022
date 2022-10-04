int stu_fact(int nb)
{
    int i;
    i= 1;
    int n;
    n= 1;
    while(i < nb){
        i += 1;
        n = i*n;
    }
    if (n <= 36767) {
        return (n);
    }else{
        return 0;
    }
}

