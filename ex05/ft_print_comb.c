/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:16:33 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 16:47:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print(char a_char, char b_char, char c_char, int a, int b, int c)
{
    write(1, &a_char, 1);
    write(1, &b_char, 1);
    write(1, &c_char, 1);
    if (a != 7 || b != 8 || c != 9)
    {
        write(1, &comma, 1);
        write(1, &space, 1);
    }
}
void ft_print_comb(void)
{
    int a = 0, b, c;
    char comma = ',', space = ' ';
    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                char a_char = a + '0', b_char = b + '0', c_char = c + '0';
                ft_print(a_char, b_char, c_char, a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}
