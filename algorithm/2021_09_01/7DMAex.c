/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7DMAex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:32:43 by devicii           #+#    #+#             */
/*   Updated: 2021/09/01 20:32:43 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(){
	char *pc = NULL;
	int i = 0;
	// 100byte크기가 pc에 할당됌.
	pc = (char *)malloc(100 * sizeof(char));

	if (pc == NULL)
	{
		printf("Fail");
		exit(1);
	}
	// pc가 가리키는 포인터를 1씩 증가하며 알파벳 소문자를 삽입
	for ( i = 0; i < 26; i++)
	{
		//pc[i] ='a' + i랑 같음
		*(pc + i ) = 'a' + i;
	}
		*(pc + i) = 0;


	printf("%s\n", pc);
	free(pc);

	return 0;
}
