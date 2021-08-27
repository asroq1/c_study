/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3summaryOfNumbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 13:44:23 by devicii           #+#    #+#             */
/*   Updated: 2021/08/27 13:44:23 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int n, sum;
	sum = 0;
	scanf("%d", &n);

	char str[n];
	scanf("%s", str);

	for (int i = 0; i < n; i++)
	{
	sum += str[i] - '0';
	}
	printf("%d", sum);
	return 0;
}
