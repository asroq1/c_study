/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5doubleArray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:52:11 by devicii           #+#    #+#             */
/*   Updated: 2021/09/01 19:52:11 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, x , y;

	//1. arr[x][y]를 만들기 위해 더블 포인터를 만든다.
	//arr[x]였다면 int *arr이었을 것이다.
	int **arr;

	printf("arr[x][y]를 만듭시다. \n");
	scanf("%d %d", &x , &y );

	// int* 형의 원소를 x개 가지는 1차원 배열 생성
	arr = (int **)malloc(sizeof(int *) * x);

	for ( i = 0; i < x; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * y);
	}

	printf("생성 완료 \n");

	for ( i = 0; i < x; i++)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}
