/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2quizOX.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:19:11 by devicii           #+#    #+#             */
/*   Updated: 2021/08/24 18:19:11 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int count, length;
	count = 1;
	char *str;
	scanf("%s", &str);
	// length = sizeof(str) / sizeof(char);
	// scanf("%s", &str);
	// for (int i = 0; i < length; i++)
	// {

	// 	for (int j = i; j < length; j++)
	// 	{
	// 		if (str[i] == 'O' && str[j] == 'O')
	// 		{
	// 			count++;
	// 		}

	// 	}
	// }
	// printf("leng %d\n", length);
	// printf("count : %d\n", count);

	printf("str :%s", *str);

	return 0;
}

// o는 정답 x는 정답이 아님
// o다음에도 o라면 count는 누적 아니라면 다시 1로 초기화
