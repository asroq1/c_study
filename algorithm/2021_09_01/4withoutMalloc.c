/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4withoutMalloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:42:21 by devicii           #+#    #+#             */
/*   Updated: 2021/09/01 19:42:21 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int main(){
	int n, sum = 0;
	printf("학생 수를 입력하세요.");
	scanf("%d", &n);
	int arr[n];

	for (int  i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
	printf("%d 번째 학생의 점수는 : %d\n", n, arr[i]);
	sum += arr[i];
	}
	printf("성적의 평균은 : %d", sum / n);
	return 0;
}
