/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-4.C                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:57:29 by devicii           #+#    #+#             */
/*   Updated: 2021/08/21 14:57:29 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}

	return 0;
}
