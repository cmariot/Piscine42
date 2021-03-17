/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:11:34 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/17 20:12:04 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
   	int resultat;
	int len_to_find;

	char OK = 'A';
	char nul = 'Z';

	i = 0;
	j = 0;
	resultat = 0;
	len_to_find = 0;
	while (to_find[len_to_find] != '\0')
			len_to_find++;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			resultat++;
			j++;
		}
		i++;
	}
	if (resultat == len_to_find)
			write(1, &OK, 1);
	else
			write(1, &nul, 1);

	return to_find;
}


int main ()
{
	char needle[] = "Ye";
	char haystack[] = "You can find me.";
	ft_strstr(haystack, needle);
	return (0);
}
