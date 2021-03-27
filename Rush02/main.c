/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 21:12:26 by charles           #+#    #+#             */
/*   Updated: 2021/03/26 23:57:09 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int		ft_isspace(char c)
{
	if ((c == '\t' || c == '\n' || c == '\v') ||
		(c == '\f' || c == '\r' || c == 32))
		return (1);
	else
		return (0);
}

int		ft_count_minus(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

unsigned int	ft_atoi(char *str)
{
	int i;
	unsigned int nb;

	i = 0;
    nb = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
	return (nb);
}

// [0 ; 65535]
int     ft_is_it_a_validate_unsigned_int(char *str)
{
    unsigned int    nbr;

    nbr = ft_atoi(str);
    if (nbr >= 0 && nbr <= 65535 && i <= 5)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int     main(int argc, char **argv)
{
    char *reference_dictionary;
    char *value_to_convert;

        if (argc == 2)
        {
            value_to_convert = argv[1];
            if (ft_is_it_a_validate_unsigned_int(value_to_convert) == 1)
            {
                printf("%s\n", argv[1]);
                //parse(argv[1]);
            }
            else
            {
                ft_putstr("Error");
                ft_putchar('\n');
            }
            return (0);
        }
        else if (argc == 3)
        {
            reference_dictionary = argv[1];
            value_to_convert = argv[2];
            if (ft_is_it_a_validate_unsigned_int(value_to_convert) == 1)
            {
                printf("%s\n", argv[1]);
                printf("%s\n", argv[2]);
                //parse(argv[2]);
            }
            return (0);
        }
    ft_putstr("Error");
    ft_putchar('\n');
    return (0);
}
