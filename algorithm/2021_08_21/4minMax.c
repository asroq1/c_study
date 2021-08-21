/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4minMax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:51:12 by devicii           #+#    #+#             */
/*   Updated: 2021/08/21 16:51:12 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int main(){
	int n;
	int max = INT_MIN;
	int min = INT_MAX;
	scanf("%d", &n);
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}

		if (arr[i] > max)
		{
			max = arr[i];
		}

	}
	printf("%d %d", min, max);

	return 0;
}
