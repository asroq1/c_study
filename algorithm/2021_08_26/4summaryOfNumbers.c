/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4summaryOfNumbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:48:09 by devicii           #+#    #+#             */
/*   Updated: 2021/08/26 16:48:09 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

	long long sum(int *a, int n){
	long long answer = 0;
	for (int i = 0; i < n; i++)
	{
		answer += a[i];
	}
	return answer;
}
