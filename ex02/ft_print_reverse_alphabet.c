/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:16:08 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 16:45:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    char ch = 'z';
    while (ch >= 'a')
    {
        write(1, &ch, 1);
        ch--;
    }
}
