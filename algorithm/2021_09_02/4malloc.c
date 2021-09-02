/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4malloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:04:50 by devicii           #+#    #+#             */
/*   Updated: 2021/09/02 15:04:50 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, input, sum = 0;
	int subjuect, students;
	int **arr;

	printf("Subject  :");
	scanf("%d", &students);

	printf("Students :");
	scanf("%d", &subjuect);

	//1. 입력받은 subject의 수만큼 1차원 배열을 만든다.
	arr = (int **)malloc(sizeof(int *) * subjuect);

	//2. 그 후 입력받은 값을 통해 arr[sub][i]로 초기화 해준다.
	for ( i = 0; i < subjuect; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * students);
	}

	for ( i = 0; i < subjuect; i++)
	{
		printf("Sub %d point ----- \n", i);

		for (j = 0; j < students; j++)
		{
			printf("Student %d point here :", j);
			scanf("%d", &input);

			arr[i][j] = input;
		}

	}

	for ( i = 0; i < subjuect; i++)
	{
		sum = 0;
		for ( j = 0; j < students; j++)
		{
			sum += arr[i][j];
		}
		printf("Sub %d avg : %d \n", i , sum / students);
	}

	for ( i = 0; i < subjuect; i++)
	{
		free(arr[i]);
	}

	free(arr);

	return 0;
}


