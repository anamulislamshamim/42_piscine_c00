/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:41:15 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 16:49:54 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void put_char(char ch)
{
    write(1, &ch, 1);
}
void print_out(int *arr, int n)
{
    int p = 0;
    while (p < n)
    {
        put_char(arr[p] + '0');
        p++;
    }
}
void ft_print_combn(int n)
{
    int arr[10], maxIdx = n - 1, max = 9;
    for (int i = 0; i < n; i++)
        arr[i] = i;
    print_out(arr, n);
    while (arr[0] != 9 - n + 1 || arr[n - 1] != 9)
    {
        if (arr[0] != 10 - n || arr[n - 1] != 9)
            put_char(','), put_char(' ');
        if (arr[n - 1] != 9)
            arr[n - 1] += 1;
        else
        {
            while (arr[maxIdx] == max)
                maxIdx--, max--;
            arr[maxIdx] += 1;
            while (maxIdx < n)
                arr[maxIdx + 1] = arr[maxIdx] + 1, maxIdx++;
        }
        print_out(arr, n);
    }
}
