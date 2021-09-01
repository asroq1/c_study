/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2study.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:35:34 by devicii           #+#    #+#             */
/*   Updated: 2021/09/01 18:35:34 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int agr, char **argv){
	int sizeOfArray;
	int *arr;

	printf("만들고 싶은 배열 원소의 수 : \n");
	scanf("%d", &sizeOfArray);

	arr = (int *)malloc(sizeof(int) * sizeOfArray);

	free(arr);
	return 0;
}
