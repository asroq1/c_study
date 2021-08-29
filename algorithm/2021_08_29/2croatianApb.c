/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2croatianApb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:44:23 by devicii           #+#    #+#             */
/*   Updated: 2021/08/29 16:44:23 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main(){
	int count;
	char input[101];
	scanf("%s", input);
	count = strlen(input);

	for (int i = 0; i < strlen(input); i++)
	{

		if(input[i] == 'l'&& input[i + 1] == 'j' || input[i] == 'n'&& input[i + 1] == 'j'   )
		{
			count--;
		}
		if(input[i] == '=' || input[i] == '-')
		{
			count--;
		}
		if(input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=')
		{
			count--;
		}
	}

	printf("%d" , count);

	return 0;
}
