/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3increase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:15:55 by devicii           #+#    #+#             */
/*   Updated: 2021/08/21 15:15:55 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int n, count, a, b, c, d, temp;
	scanf("%d", &n);
	temp = n;
	while (1)
	{
		a = n / 10;
		b = n % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		n = d;
		count++;
		if(d == temp){
			break;
		}
	}
	printf("%d", count);

	return 0;
}
