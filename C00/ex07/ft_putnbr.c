/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:37:12 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/12 15:41:04 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nb);


int main()
{
	ft_putnbr(9);	
	return(0);
}




void ft_putchar(char c)
{
	
	write(1, &c, 1);
}


void ft_putnbr(int nb)
{		




	write(1, &nb, 1);







}
