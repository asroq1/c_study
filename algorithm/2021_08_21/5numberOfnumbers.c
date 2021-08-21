/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5numberOfnumbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:00:52 by devicii           #+#    #+#             */
/*   Updated: 2021/08/21 18:00:52 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int a, b, c, total, rest;
	int arr[10] ={0, };
	scanf("%d %d %d", &a, &b, &c);
	total = a * b * c;
	while (total > 0)
	{
		rest = total % 10;
		total = total / 10;
		arr[rest]++;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n" , arr[i]);
	}
	return 0;
}

// 첫 번째 줄 : 0의 개수
