/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3.sangsoo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:04:41 by devicii           #+#    #+#             */
/*   Updated: 2021/08/28 19:04:41 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	char a[100], b[100];
	char ra[100], rb[100];
	int ia, ib;
	scanf("%s %s", a, b);
	for (int i =0; i < strlen(a) ; i++)
	{
		ra[i] = a[ strlen(a) - (i + 1)];
	}
	for (int i =0; i < strlen(b) ; i++)
	{
		rb[i] = b[ strlen(b) - (i + 1)];
	}
	ia = atoi(ra);
	ib = atoi(rb);
	if(ia > ib)
	{
		printf("%d", ia);
	}
	else
	{
		printf("%d", ib);
	}
	return 0;
}
