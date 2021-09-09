/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:02:45 by hyunjung          #+#    #+#             */
/*   Updated: 2021/09/09 12:02:45 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_reverse_alphabet(void){
	char arr[1] = {122};

	while (arr[0] > 96)
	{
		write(1, arr , 1);
		arr[0]--;
	}
	
}
