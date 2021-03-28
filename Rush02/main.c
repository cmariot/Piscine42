/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 10:18:10 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/27 12:46:25 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define	BUF_SIZE	691

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

unsigned long long	ft_atoi(char *str)
{
	unsigned int i;
	unsigned long long nb;
	unsigned int str_len;

	str_len = ft_strlen(str);
	i = 0;
	nb = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
       	nb = nb * 10 + (str[i] - '0');
       	i++;
	}
	if (str_len == i)
		return (nb);
	else
		return (9999999999);
}

// [0 ; 4294967295]
int     ft_is_it_a_validate_unsigned_int(char *str)
{
    unsigned long long    nbr;

    nbr = ft_atoi(str);
    if (nbr >= 0 && nbr <= 4294967295)
        return (1);
	else
		return (0);
}

int		open_dictionary()
{
	int		file_descriptor;
	char	buf[BUF_SIZE + 1];
	int 	read_return;
	int		close_descriptor;

	file_descriptor = open("./dictionary.txt", O_RDWR, O_APPEND);
    if (file_descriptor == -1)
    {
	    ft_putstr("Error : open dictionary failed\n");
        return (1);
    }
    printf("File Descriptor : %d\n", file_descriptor);
    read_return = read(file_descriptor, buf, BUF_SIZE);
    buf[read_return] = '\0';
    printf("taille buffer = %d\n", read_return);
    ft_putstr(buf);


    close_descriptor = close(file_descriptor);
    if (close_descriptor == -1)
    {
	    ft_putstr("Error : close dictionary failed\n");
		return (1);
    }   
	return (0);
}

int     main(int argc, char **argv)
{
    char 	*reference_dictionary;
    char 	*value_to_convert;

        if (argc == 2)
        {
            value_to_convert = argv[1];
            if (ft_is_it_a_validate_unsigned_int(value_to_convert) == 1)
            {
                printf("1 argument, valide ui : %s\n", argv[1]);
            	open_dictionary();
			}
            else
            {
                ft_putstr("Error : non valide unsigned int\n");
				return (1);
            }
            return (0);
        }
        else if (argc == 3)
        {
            reference_dictionary = argv[1];
            value_to_convert = argv[2];
            if (ft_is_it_a_validate_unsigned_int(value_to_convert) == 1 )
            {
                printf("2 arguments, dictionary %s\n", argv[1]);
                printf("2 arguments, valide ui %s\n", argv[2]);
                //parse(argv[2]);
            }
			else
			{
                ft_putstr("Error\n");
				return (1);
			}
        }
    ft_putstr("Error\n");
    return (0);
}
