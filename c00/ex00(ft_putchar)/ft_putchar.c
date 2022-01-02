
#include "ft_putchar.h"

void ft_putchar(char letter);

void ft_putchar(char letter) {

    write(1, &letter, 1);
}
