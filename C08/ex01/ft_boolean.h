<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftboolean.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:41:09 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/29 17:02:48 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN(nb)  (nb % 2)
# define EVEN_MSG	"I have an odd number of arguments."
# define ODD_MSG	"I have an even number of arguments."
# define SUCCESS 0

typedef int	t_bool;

#endif
=======
#include <unistd.h>

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0
// #define TRUE 1
// #define FALSE 0
#define EVEN ft_is_odd

void ft_putstr(char *str);

typedef struct st_bool t_bool;
struct st_bool
{
    struct st_bool TRUE;

    struct st_bool FALSE;

};


struct st_bool ft_is_odd(int nb)
{
    if (nb % 2 == 0)
        return (TRUE);
    else
        return (FALSE);
}

>>>>>>> ee1c1adb0f326ad1bb92e430e6d7cfc24c400374
