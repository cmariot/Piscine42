/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:47:12 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/16 10:22:45 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int resultat;

	i = 0;
	resultat = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
		}
		else
		{
			resultat++;
		}
		i++;
	}
	if ((resultat > 0) || (i > 0))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
