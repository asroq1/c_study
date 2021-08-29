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
int selector(char arr[], int length);
int main(){
	int n, sum, i;
	char arr[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", arr);
		sum += selector(arr, strlen(arr));
	}
	printf("%d", sum);

	return 0;
}

int selector(char arr[], int length){
	int i, j;
	int key = 0;

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if(arr[i] == arr[j])
			{

				key = j - i;
				if(key > 1 )
				{

					if(arr[j] != arr[j - 1]  ){
						return 0;
					}
				}
			}
		}
	}
	return 1;
}
