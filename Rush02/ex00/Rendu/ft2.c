/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:35:35 by esivre            #+#    #+#             */
/*   Updated: 2021/03/28 18:21:24 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int		ft_is_it_a_validate_unsigned_int(char *str)
{
	unsigned long long	nbr;

	nbr = ft_atoi(str);
	if (nbr <= 4294967295)
		return (1);
	else
		return (0);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	to_find_len;

	i = 0;
	to_find_len = 0;
	while (to_find[to_find_len] != '\0')
		to_find_len++;
	if (to_find_len == 0)
		return ("Dict Error\n");
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, to_find_len) == 0)
			return (&str[i]);
		i++;
	}
	return ("Dict Error\n");
}

char	*get_nbr_name(char *str)
{
	char	*name;
	int		name_len;
	int		i;
	int		j;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ')
		i++;
	name_len = 0;
	while (str[i] > 32 && str[i++] <= 126)
		name_len++;
	if (!(name = (char *)malloc(sizeof(char) * (name_len + 2))))
		return (NULL);
	j = 0;
	i = (i - name_len);
	while (str[i] != '\0')
		name[j++] = str[i++];
	name[j] = '\n';
	name[j + 1] = '\0';
	return (name);
}

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
}
