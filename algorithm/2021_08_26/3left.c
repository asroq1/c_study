/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3left.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:32:54 by devicii           #+#    #+#             */
/*   Updated: 2021/08/26 13:32:54 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int main(){
// 	int n, left, counter;
// 	int arr[10];
// 	n = 10;
// 	left = 0;

// 	for (int i = 0; i < n; i++)
// 	{
// 		scanf("%d", &arr[i]);
// 		arr[i] = arr[i] % 42;
// 	}
// 	for (int i = 0; i < n; i++)
// 	{
// 		counter = 0;
// 		for (int j = i+1; j < n; j++)
// 		{
// 			if (arr[i] == arr[j])
// 			{
// 				 counter++;
// 			}
// 		}
// 		if(counter == 0){
// 			left++;
// 		}

// 	}
// 	printf("res : %d", left);

// 	return 0;
// }

int main(){
	int arr[10];
	int n, count, result;
	n = 10;
	result = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
	}
	for (int i = 0; i < n; i++)
	{
			count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 0)
		{
			result++;
		}
	}
		printf("%d\n", result);
	return 0;
}
