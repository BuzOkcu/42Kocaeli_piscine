#include <stdio.h>
void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;
    
    div = *a;
    mod = *b;
    *a = div / mod;
    *b = div % mod;

}
int main()
{
    int a;
    int b;

    a = 43;
    b = 9;

    printf("a : %d, b : %d\n", a, b);

    ft_ultimate_div_mod(&a , &b);

    printf("a : %d, b: %d\n", a, b);
}