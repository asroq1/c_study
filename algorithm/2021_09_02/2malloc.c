/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2malloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:36:01 by devicii           #+#    #+#             */
/*   Updated: 2021/09/02 14:36:01 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, x ,y;
	int **arr;

	printf("배열[x][y]만들기");
	scanf("%d %d", &x, &y);

	// int *형의 원소를 x개 가지는 1차원 배열 만들기
	arr = (int **)malloc(sizeof(int *) * x);

	for (int i = 0; i < x; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * y);
	}

	printf("생성 완료");

	for (int i = 0; i < x; i++)
	{
		free(arr[i]);
	}
	free(arr);


	return 0;
}
