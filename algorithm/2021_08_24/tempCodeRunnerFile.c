/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1avg.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:56:17 by devicii           #+#    #+#             */
/*   Updated: 2021/08/24 16:56:17 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	double max, avg;
	int input;
	scanf("%d", &input);

	double arr[input];

	for (int i = 0; i < input; i++)
	{
		scanf("%lf", &arr[i]);
			if(arr[i] > max){
			max = arr[i];
			}
	}
	for (int i = 0; i < input; i++)
	{
		arr[i] = (arr[i] / max) * 100;
		avg += arr[i];

	}

	avg = avg / input;
	// printf("avg :%0.2lf", avg);

	return 0;
}
// 40 / 80 * 100 50

// 60 / 80 * 100 75

// 80 / 80 * 100 100


// 1. 값을 입력 받는다
// 2. 값 중 맥스를 찾는다.
// 3. 모든 수의 맥스 공식을 합해준다.
// 4. 합해진 값의 평균을 구한다.
