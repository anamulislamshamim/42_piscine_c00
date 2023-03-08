/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:52:51 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 16:49:19 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void put_char(int nb)
{
    char ch = nb + '0';
    write(1, &ch, 1);
}
void recursion(int nb)
{
    if (nb == 0)
        return;
    recursion(nb / 10);
    put_char(nb % 10);
}

void ft_putnbr(int nb)
{
    if (nb < 10)
    {
        put_char(nb);
        return;
    }
    else
    {
        recursion(nb);
    }
}