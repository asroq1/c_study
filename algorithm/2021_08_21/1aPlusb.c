/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1aPlusb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:38:29 by devicii           #+#    #+#             */
/*   Updated: 2021/08/21 14:38:29 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
		int a, b;
		a = 1;
		b = 1;

	while (1)
	{
		scanf("%d %d", &a, &b);
		if(a == 0 && b == 0){
			break;
		}else{
		printf("%d\n" , a + b);
		}


	}

	return 0;
}