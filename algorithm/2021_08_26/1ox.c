/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ox.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 10:45:35 by devicii           #+#    #+#             */
/*   Updated: 2021/08/26 10:45:35 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
// int main(){
// 	int count, n, length;
// 	scanf("%d", &n);
// 	char  str[n];

// 	for (int i = 0; i < n; i++)
// 	{
// 		scanf("%c", &str[i]);
// 	}
// 	for (int i = 0; i < n; i++)
// 	{
// 		if (str[i] == 'O')
// 		{
// 			count ++;
// 		}
// 		for (int j = i; j < n; j++)
// 		{
// 			if (str[j] != 'X' && str[j+1] == str[j])
// 			{

// 				count ++;
// 			}else{
// 				break;
// 			}
// 		}
// 	}
// 	printf("%d\n", count);
// 	return 0;
// }

int main(){
	int count, n, score;
	char str[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		score = 1;
		count = 0;
		scanf("%s", str);
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] == 'O')
			{
				count += score;
				score++;
			}
			 if(str[j] == 'X'){
				score = 1;
			}
		}


		printf("%d\n", count);
	}

	return 0;
}
