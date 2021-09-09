/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remindLoop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:38:53 by devicii           #+#    #+#             */
/*   Updated: 2021/09/01 16:38:53 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			printf(" ");
		}
		for (int k = 0; k  <= i; k++)
		{
			printf("*");
		}
		for (int t = 0; t < i; t++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}

// 001
// 0111
// 11111

// 001 0
// 011  1
// 111   2