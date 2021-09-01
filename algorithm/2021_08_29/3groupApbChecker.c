/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3groupApbChecker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 17:47:22 by devicii           #+#    #+#             */
/*   Updated: 2021/08/29 17:47:22 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int select(char a[], int len);

int main(){
	int N,  i, sum = 0;
	char arr[100];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", arr);
		sum += select(arr, strlen(arr));
	}
	printf("%d", sum);

	return 0;
}

int select(char a[], int len){
	int i, j;
	int key = 0;

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if(a[i] == a[j])
			{

				key = j - i;
				if(key > 1 )
				{
					if(a[j] != a[j - 1]  ){
						return 0;
					}
				}
			}
		}
	}
	return 1;
}


