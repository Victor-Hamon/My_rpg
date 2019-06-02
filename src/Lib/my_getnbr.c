/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** Converts a string into an int
*/

#include "proto.h"

int long_to_int(long int nb, int is_neg)
{
    return (is_neg ? -nb : nb);
}

int my_getnbr(char const *str)
{
    int i = 0;
    long int nb = 0;
    int is_neg = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            nb = nb * 10 + (str[i] - 48);
            if ((!is_neg && nb > 2147483647) || (is_neg && nb > 2147483648))
                return 0;
        } else {
            if (nb == 0) {
                if (str[i] == '-') {
                    is_neg = ++is_neg & 1;
                } else if (str[i] != '+')
                    return long_to_int(nb, is_neg);
            } else
                return long_to_int(nb, is_neg);
        }
    }
    return long_to_int(nb, is_neg);
}
