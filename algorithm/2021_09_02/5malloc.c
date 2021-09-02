/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5malloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:52:51 by devicii           #+#    #+#             */
/*   Updated: 2021/09/02 16:52:51 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int row, column;
	printf("arr row :");
	scanf("%d", &row);
	printf("arr col");
	scanf("%d", &column);

	//2차원 배열 포인터 연산을 수행하려면 반드시 포인터 타입 안에 행의 길이가 들어가야 한다.
	int (*arr)[row] = (int(*)[row])malloc( column * row * sizeof(int));

	// 2차원
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			int data;
			printf("arr[%d][%d] Please enter ", i + 1, j + 1);
			scanf("%d", &data);
			arr[i][j] = data;
		}
	}

	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j <row; j++)
		{
			printf("arr[%d][%d] : %d ", i + 1 ,j + 1,arr[i][j]);
		}
		printf("\n");
	}

	free(arr);
	return 0;
}
