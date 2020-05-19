#include "ft_printf.h"

int main() 
{
    int count = 0;

    // count = ft_printf("|%.4i|", 5263);
    // printf("\ncount:%i\n", count - 2);
    //    count = ft_printf("|this %i number|", -267);
    // printf("\ncount:%i\n", count - 2);
    //      count = ft_printf("|%.5i|", 2);
    // printf("\ncount:%i\n", count - 2);
    count = ft_printf("|%05i|", 43);
    printf("\ncount:%i\n", count - 2);
}
