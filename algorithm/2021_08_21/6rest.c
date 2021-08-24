/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6rest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:33:14 by devicii           #+#    #+#             */
/*   Updated: 2021/08/21 18:33:14 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int count;
	int arr[10] ={ 0, };

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j <= 9; j++)
		{
			if (arr[i] == arr[j])
			{
				// printf("arr[i] %d , arr[j] : %d \n", arr[i], arr[j]);
				count++;
			}
		}
	}

	printf("count : %d \n", count);
	printf("%d", sizeof(arr) / sizeof(int) - count);

	return 0;
}

// i는 나누기 42를 해서 나온 나머지 값을 i라 칭한다. j는 동일한 나머지 값을 체크한다.
// 근데 카운터가 45임은
