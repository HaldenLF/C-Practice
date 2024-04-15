
unsigned long long concatenate_square_digits (unsigned n)
{
    unsigned y = 0;
    unsigned pow = 10;
    while(y >= pow)
        pow *= 10;
    return n * pow + y;  
}