/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:50:20 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/16 09:48:32 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int resultat;

	i = 0;
	resultat = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
		}		
		else if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
		}
		else
		{
			resultat++;
		}
		i++;
	}
	if (resultat > 0)
	{
		char R;
		R = '0';
		write(1, &R, 1);
		return(0);
	}
	else
	{
		char R;
		R = '1';
		write(1, &R, 1);
		return(1);
	}
}
