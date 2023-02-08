#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int	*mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
int main(void)
{
    int a;
    int b;
    int mod;
    int bol;
    
    a = 5;
    b = 2;
    ft_div_mod(a, b, &bol, &mod);
    printf("a : %d, b ; %d, bol : %d, mod : %d\n", a, b, bol, mod); 


}