/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:12:35 by devicii           #+#    #+#             */
/*   Updated: 2021/09/01 18:12:35 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};
	int *parr = arr; //즉 arr[0];
	int sum = 0;
	int length = sizeof(arr) / sizeof(int);

	for (int i = 0; i < length; i++)
	{
		sum +=  (*parr);
		printf("parr : %p \n", parr);
		parr++;
	}

	printf("%d\n", sum);

printf("avg : %d ", sum / 10);

	return 0;
}
