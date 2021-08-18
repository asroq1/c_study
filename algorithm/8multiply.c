/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8multiply.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:00:48 by devicii           #+#    #+#             */
/*   Updated: 2021/08/18 17:00:48 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int main(){
	int num1,num2;
	scanf("%d %d", &num1, &num2);
	int fir, sec, third;

	fir = num1 * (num2%10);
	sec = num1 * ((num2/10) %10);
	third =  num1 * ((num2/100) % 10);

	printf("%d\n", fir);
	printf("%d\n", sec);
	printf("%d\n", third);
	printf("%d\n", num1 * num2);
	return 0;
}
