/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14star.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:37:37 by devicii           #+#    #+#             */
/*   Updated: 2021/08/20 17:37:37 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}