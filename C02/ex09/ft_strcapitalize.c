/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 07:33:43 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/17 07:53:17 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumeric(char letter)
{
	if ((letter >= '0') && (letter <= '9'))
	{
		return (1);
	}
	else if ((letter >= 'a') && (letter <= 'z'))
	{
		return (1);
	}
	else if ((letter >= 'A') && (letter <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if (ft_is_alphanumeric(str[i - 1]) == 0)
		{
			if (ft_is_alphanumeric(str[i]) == 1)
			{
				if (str[i] > 90)
				{
					c = str[i] - 32;
					str[i] = c;
				}
			}
		}
		i++;
	}
	return (str);
}