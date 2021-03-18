/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:11:34 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/18 16:25:40 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int difference;
	unsigned int i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i <= n))
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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int to_find_len;

	i = 0;
	to_find_len = 0;
	while (to_find[to_find_len] != '\0')
	{
		to_find_len++;
	}
	if (to_find_len == 0)
	{
		return (to_find);
	}
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, (to_find_len - 1)) == 0)
		{
			return (&to_find[i]);
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char *needle;
	char *haystack;

	needle = "me";
	haystack = "You can find me.";
	ft_strstr(haystack, needle);
	return (0);
}
