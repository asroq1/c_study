/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2StudyAlphatbet.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 15:59:37 by devicii           #+#    #+#             */
/*   Updated: 2021/08/28 15:59:37 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <limits.h>
// 1 인풋 입력
// 2 문자열을 돌아가며 문자의 갯수를 알아간다
// 3 반복할 때마다 max보다 크다면 해당 문자를 max로 할당

int main(){
	char apb[1000001];
	int count[123] = { 0, };
	int max = INT_MIN;
	int maxApb, div=0, length;

	scanf("%s", apb);
	length = strlen(apb);

	for (int i = 0; i < length; i++)
	{
		for (int j = 65; j < 91; j++)
		{
			if(j == apb [i])
			{
				count[j]++;
			}
		}
		for (int j = 97; j < 123; j++)
		{
			if(j == apb [i])
			{
				count[j - 32]++;
			}
		}
	}
	for (int i = 65; i < 91; i++)
	{
		if(count[i] > max)
			{
				max = count[i];
				maxApb = i;
			}
	}
	for (int i = 65; i < 91; i++)
	{
		if(max == count[i])
		{
			div++;
		}
	}

	if(div >  1){
		printf("?");
	}
	else
	{
		printf("%c", maxApb);
	}

	return 0;
}



