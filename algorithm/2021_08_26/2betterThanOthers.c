/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2betterThanOthers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:02:06 by devicii           #+#    #+#             */
/*   Updated: 2021/08/26 12:02:06 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main (){
	int c, n;
	scanf("%d", &c);

	for (int i = 0; i < c; i++)
	{
		scanf("%d", &n);
		int score[1000], sum =0;
		double avg = 0.00;
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}

		avg = (double)sum / n;
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (avg < score[j])
			{
				count++;
			}
		}
		printf("%.3lf%% \n", (double)100 / n  * count);

	}

	return 0;
}
