/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:38:15 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/18 13:43:13 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int difference;
	int i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i <= n - 1))
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				difference = (s1[i] - s2[i]);
				return (difference);
			}
			else if (s1[i] < s2[i])
			{
				difference = (s1[i] - s2[i]);
				return (difference);
			}
		}
		i++;
	}
	return (0);
}
