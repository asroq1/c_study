/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8summary.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:52:11 by devicii           #+#    #+#             */
/*   Updated: 2021/08/20 16:52:11 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int sum, num;
	sum = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}

