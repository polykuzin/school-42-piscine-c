
#include "ft_print_alphabet.h"

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

int main(void) {

    ft_print_alphabet();
}