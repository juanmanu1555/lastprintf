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
    // count = ft_printf("|%p|", NULL);
    // printf("\ncount:%i\n", count - 2);

    //     count = ft_printf("|%p|", NULL);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //         count = ft_printf("|%5p|", NULL);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //         count = ft_printf("|%1p|", NULL);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //       count = ft_printf("|%.p|", NULL);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //        count = ft_printf("|%.0p|", NULL);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //        count = ft_printf("|%.1p|", NULL);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //        count = ft_printf("|%.2p|", NULL);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //            count = ft_printf("|%6.3p|", NULL);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //                count = ft_printf("|%5.p|", NULL);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //                   count = ft_printf("|%9.2p|", 1234);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    
    //                   count = ft_printf("|%2.9p|", 1234);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

       
    //                   count = ft_printf("|%7x|", 33);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //                       count = ft_printf("|%c|", '!');
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    long numb1;

    // count = ft_printf("|%-70p|", &numb1);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

    //  count = ft_printf("|%-70p|", &numb1);
    // printf("\ncount:%i\n", count - 2);
    // printf("\n");

static unsigned int     mx_u = 235;
static char mx_c = 'G';
static char *mx_s = "Hello, World!";
static int mx_i = 42;
const int INT_MIN = -2147483648;
    //  count = (ft_printf("%s", mx_s) + ft_printf("%s", mx_s));
    // printf("\ncount:%d\n", count);
    //  printf("\n");

    // count = ft_printf("|%d|", INT_MIN);
    // printf("\ncount:%d\n", count -2);
    
    // count = ft_printf("|%.*s|", -3, "hello");
    // printf("\ncount:%d\n", count -2);

//   count = ft_printf("|%.*i|", -6, -3);
//     printf("\ncount:%d\n", count -2);

//   count = ft_printf("|%%04.2i 42 == |%04.2i|   |", 42);
//     printf("\ncount:%d\n", count -2);

    //  count = ft_printf("|%04.2i|", 42);
    // printf("\ncount:%d\n", count -2);

    //      count = ft_printf("|%0*i|", -7, -54);
    // printf("\ncount:%d\n", count -2);
    // return (0);

   
           count = (ft_printf("%s", mx_s) + ft_printf("%x", mx_u));
    printf("\ncount:%d\n", count);
    return (0);
}


// "%%04.2i 42 == |%04.2i|   ", 42)