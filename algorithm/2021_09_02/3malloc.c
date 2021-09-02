/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3malloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devicii <asroq98@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:53:08 by devicii           #+#    #+#             */
/*   Updated: 2021/09/02 14:53:08 by devicii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
	int number;
	char title[100];
};

void showBook(struct Book *p, int n){
	int i;
	for (int i = 0; i < n; i++)
	{
		printf(" num %d : %s \n", (p + i)-> number ,( p + i)->title);
	}

}
int main(){

	struct Book *p;
	// 2개의 책 정보를 메모리에 할당
	p = (struct  Book *)malloc( 2 * sizeof(struct  Book));

	if(p == NULL)
	{
		printf("fail");
		exit(1);
	}

	p->number = 1;
	strcpy(p->title, "c programming");


	(p + 1)->number = 2;
	strcpy((p + 1)->title, "data structure");

	showBook(p , 2);
	free(p);
	return 0;
}
