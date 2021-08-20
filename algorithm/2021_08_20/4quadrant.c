/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4quadrant.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:33:32 by devicii           #+#    #+#             */
/*   Updated: 2021/08/20 14:33:32 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int x, y;
	scanf("%d %d", &x, &y);

	if(x < 0 && y >= 0){
		// 2quadrant
		printf("2");
	}else if(x >= 0 && y >= 0){
		// 1quadrant
		printf("1");
	}else if(x < 0 && y < 0 ){
		// 3quadrant
		printf("3");
	}else if(x >= 0 && y < 0){
		// 4quadrant
		printf("4");
	}else{
		printf("error");
	}

	return 0;
}
