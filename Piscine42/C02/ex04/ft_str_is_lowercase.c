/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:00:24 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/16 13:00:39 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int resultat;

	i = 0;
	resultat = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
		}
		else
		{
			resultat++;
		}
		i++;
	}
	if ((resultat == 0) || (i == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
