/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4lookForAlphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:55:59 by devicii           #+#    #+#             */
/*   Updated: 2021/08/27 14:55:59 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//입력값 중 a b z 가 있으면 위치를 출력, 없다면 -1
int main(){
	char S[101] = { 0, };
	scanf("%s", S);
	int j, count;

	// a - z까지 asicii코드 수만큼 돌린다.
	for (int i = 97; i <= 123; i++)
	{
		count = 0;
		for (int j = 0; S[j] != NULL; j++)
		{
			if (S[j] == i)
			{
				printf("%d ", j);
				count++;
				break;
			}
		}
		if (count == 0)
		{
			printf("-1 ");
		}

	}

	return 0;
}

