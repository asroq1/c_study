/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3malloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:55:37 by devicii           #+#    #+#             */
/*   Updated: 2021/09/01 18:55:37 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int student;
	int i, input;
	int *score;
	int sum = 0;

	printf("학생 수는 ? :");
	scanf("%d", &student);

	score = (int *)malloc(sizeof(int) * student);

	for (int i = 0; i < student; i++)
	{
		printf("학생 %d의 점수 : ", i);
		scanf("%d", &input);

		score[i] = input;
	}

	for (int i = 0; i < student; i++)
	{
		sum += score[i];
	}

	printf("평균 점수 : %d \n", sum / student);
	free(score);


	return 0;
}
