/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1compareTwoNumbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:04:49 by devicii           #+#    #+#             */
/*   Updated: 2021/08/20 14:04:49 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a , &b);

	if(a > b){
		printf(">");
	}else if(a < b){
		printf("<");
	}else if(a == b){
		printf("==");
	}else{
		printf("error");
	}

	return 0;
}
