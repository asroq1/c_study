/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6recursive.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:45:46 by devicii           #+#    #+#             */
/*   Updated: 2021/09/02 17:45:46 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ncr(int n, int r){

	if (r == 0 || r == n)
	{
		return 1;
	}
	else
	{
		return ncr(n - 1, r - 1) + ncr(n - 1, r);
	}

}
int main(){
	printf("%d",ncr(200 , 400));
	return 0;
}
