
#include "ft_print_reverce_alphabet.h"

void ft_print_reverce_alphabet(void);

void	ft_print_reverce_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}

int main(void) {

    ft_print_reverce_alphabet();
}