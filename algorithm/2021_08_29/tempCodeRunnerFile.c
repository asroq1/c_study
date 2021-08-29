/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3groupApbChecker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 17:47:22 by devicii           #+#    #+#             */
/*   Updated: 2021/08/29 17:47:22 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int main(){
	int n, cnt;
	char input[101];
	scanf("%d", &n);
	for (int j = 0; j < n; j++)
	{
		cnt = 0;
		scanf("%s", input);
		for (int i = 0; i < strlen(input); i++)
		{
			for (int k = i + 1; k < strlen(input); k++)
			{
				if(input[i] != input[j] && )
				{
					cnt++;
				}
			}
		}
	}
	printf("cnt : %d", cnt);


	return 0;
}
