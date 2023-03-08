/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 02:34:10 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 16:48:41 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print(char l1, char l2, char space, char comma, char r1, char r2, int digits1, int digits1)
{
    write(1, &l1, 1);
    write(1, &l2, 1);
    write(1, &space, 1);
    write(1, &r1, 1);
    write(1, &r2, 1);
    if (digits1 != 98 || digits2 != 99)
    {
        write(1, &comma, 1);
        write(1, &space, 1);
    }
}
void ft_print_comb2(void)
{
    int digits1 = 0, digits2 = 0;
    char l1 = '0', l2 = '0', r1 = '0', r2 = '0', space = ' ', comma = ',';
    while (digits1 <= 98)
    {
        digits2 = digits1 + 1;
        while (digits2 <= 99)
        {
            if (digits1 >= 10)
                l1 = digits1 / 10 + '0', l2 = digits1 % 10 + '0';
            else
                l1 = '0', l2 = digits1 + '0';
            if (digits2 >= 10)
                r1 = digits2 / 10 + '0', r2 = digits2 % 10 + '0';
            else
                r1 = '0', r2 = digits2 + '0';
            ft_print(l1, l2, space, comma, r1, r2, digits1, digits1);
            digits2++;
        }
        digits1++;
    }
}
