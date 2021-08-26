/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5selfNumbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:03:31 by devicii           #+#    #+#             */
/*   Updated: 2021/08/26 17:03:31 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int selfNumber(int num){
	int sum = num;
	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main(){

	selfNumbers();

	return 0;
}

//  b = (ab) + a + b
