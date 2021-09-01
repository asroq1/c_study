/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1BEP.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:14:06 by devicii           #+#    #+#             */
/*   Updated: 2021/08/31 12:14:06 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdbool.h>
// int main(){
// 	int a, b, c, point, cnt = 1;
// 	// scanf("%d %d %d", &a, &b, &c);
// 	b = 9;

// 	while (true)
// 	{
// 		a = 2100000000;
// 		c = 10;

// 		a = a + (b * cnt);
// 		c = c * cnt;

// 		if(a == c ){
// 			if(cnt == -3){
// 				printf("%d\n", cnt + 2);
// 				break;
// 			}else{
// 				printf("%d\n", cnt + 1 );

// 				break;
// 			}

// 		}
// 		else
// 		{
// 		cnt++;
// 		};
// 	}

// 	return 0;
// }

#include <stdio.h>

int main(){
	long a, b ,c, res;
	int cnt =  1;
	scanf("%d %d %d", &a , &b, &c);

	if(b >= c){
		printf("-1");
		return 0;
	}
	res = a / (c - b) + 1;
	printf("%d", res);
	return 0;
}
