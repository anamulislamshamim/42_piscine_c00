/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:16:16 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 16:46:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_numbers(void)
{
    char num = '0';
    while (num <= '9')
    {
        write(1, &num, 1);
        num++;
    }
}