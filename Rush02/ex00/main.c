#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


#define	BUF_SIZE	710

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

int     ft_linelen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\n' || str[i] == '\0')
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

// [0 ; 4 294 967 295]
int     ft_is_it_a_validate_unsigned_int(char *str)
{
    unsigned long long    nbr;

    nbr = ft_atoi(str);
    if (nbr >= 0 && nbr <= 4294967295)
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

char *get_nbr_name(char *str)
{
	char *name;
    char *nbr_name;
	int name_len;
	int i;
	int j;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ')
	   i++;
	name_len = 0;
	while (str[i] > 32 && str[i++] <= 126)
        name_len++;
    if (!(name = (char *)malloc(sizeof(char) * (name_len + 1))))
		return (NULL);
	j = 0;
	i = (i - name_len);
	while (str[i] != '\0')
        name[j++] = str[i++];
    name[j] = '\n';
    nbr_name = name;
    free(name);
	return (nbr_name);
}

char *find_ui_line_in_buf(char *buf, char *value_to_convert)
{
    int line_len;
    char *found_line;
    char *line;
    char *nbr_line;
    int i;

    found_line = ft_strstr(buf, value_to_convert);


    //si non trouve, convertir int puis diviser & modulo
    if (ft_strncmp(ft_strstr(buf, value_to_convert), "Dict Error\n", ft_strlen(ft_strstr(buf, value_to_convert))) == 0)
    {
        return ("Dict Error\n");
    }



    line_len = ft_linelen(found_line);
    if(!(line = (char *)malloc(sizeof(char) * (line_len + 1))))
			return (NULL);
    i = 0;
    while (found_line[i] != '\n')
    {
        line[i] = found_line[i];
        i++;
    }
    line[i] = '\0';
    nbr_line = get_nbr_name(line);
	return (nbr_line);
}

int		open_dictionary(char *path, char *value_to_convert)
{
	int		file_descriptor;
	char	buf[BUF_SIZE + 1];
	int 	read_return;
	int		close_descriptor;
    char    *nbr_name;

	file_descriptor = open(path, O_RDWR, O_APPEND);
    if (file_descriptor == -1)
    {
	    ft_putstr("Dict Error\n");
        return (1);
    }
    read_return = read(file_descriptor, buf, BUF_SIZE);
    buf[read_return] = '\0';
    //faire varier taille buffer en fonction des ajouts dans le dictionnaire ?

    nbr_name = find_ui_line_in_buf(buf, value_to_convert);
    ft_putstr(nbr_name);

    close_descriptor = close(file_descriptor);
    if (close_descriptor == -1)
    {
	    ft_putstr("Dict Error\n");
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
            open_dictionary("./dictionary.txt", value_to_convert);
        }
        else
        {
            ft_putstr("Error\n");
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
            open_dictionary(reference_dictionary, value_to_convert);
        }
        else
        {
            ft_putstr("Error\n");
            return (1);
        }
        return (0);
    }
    ft_putstr("Error\n");
    return (0);
}
