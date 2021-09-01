/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6DMA.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:17:50 by devicii           #+#    #+#             */
/*   Updated: 2021/09/01 20:17:50 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p;

	// (int *) 는 int형이라는 것을 선언하기 위함이다.
	// malloc(sizeof(int)) 은 메모리 힙에 int사이즈 만큼 할당해주는 것이다.
	// 즉 p는 int형의 4byte만큼 할당해주는 메모리 주소값이다.
	p = (int *)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("FAILURE");
		exit(1);
	}

	*p = 100;
	printf("%d \n", *p);
	printf("%d \n",  p);

	// free를 활용해 메모리 할당을 해제한다.
	// 사용 후 무조건 반납해야한다.
	free(p);

	return 0;
}
