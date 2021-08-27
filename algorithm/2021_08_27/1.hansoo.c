/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.hansoo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 12:20:16 by devicii           #+#    #+#             */
/*   Updated: 2021/08/27 12:20:16 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int hanFunc(int n);
int main(){
	int num, result;
	num = 0;
	result = 0;
	// printf("INSERT HERE...\n");
	scanf("%d", &num);

	result = hanFunc(num);
	printf("%d\n", result);
	return 0;
}

int hanFunc(int n){
	int count,hundread, teen, one;
	count = 0;
	if (n < 100)
		{
			return n;
		}
		else
		{
			for (int i = 100; i <=  n; i++)
			{
				hundread = i / 100;
				teen = (i % 100) / 10;
				one = (i % 100) % 10;
				if ((hundread - teen) == (teen - one))
				{
					count++;
				}
			}
			return (99 + count);
		}
}
