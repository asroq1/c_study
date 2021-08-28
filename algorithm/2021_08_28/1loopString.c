/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1loopString.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 15:27:17 by devicii           #+#    #+#             */
/*   Updated: 2021/08/28 15:27:17 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// input 2 abc
// output aaabbbccc

// input 5 /htp
// output /////hhhhhtttttppppp

// 1 입력을 받는다
// 2 n번의 수만큼 문자열의[n]번부터 반복문을 돌리고 새로운 문자열 NS로 반환
// 3 종료될 때까지 반복


int main(){
	int n, loop;
	char input[21];

	scanf("%d", &n);

	for (int k = 0; k < n; k++)
	{
	scanf("%d", &loop);
	scanf("%s", input);
	for (int i = 0; i < loop; i++)
	{
		for (int j = 0; j < strlen(input); j++)
		{
			printf("%c", input[i]);
		}
	}
		printf("\n");
	}


	return 0;
}
