/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:31:35 by hyunjung          #+#    #+#             */
/*   Updated: 2021/09/09 14:31:35 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    char yes = 'Y';
    char no = 'N';

    if ( n < 0)
    {
         write(1, &no , 1);
    }
    else
    {
         write(1, &yes , 1);
    }
    
}