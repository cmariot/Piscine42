/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftboolean.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:41:09 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/30 10:35:30 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN(nb)  (nb % 2)
# define EVEN_MSG	"I have an odd number of arguments.\n"
# define ODD_MSG	"I have an even number of arguments.\n"
# define SUCCESS 0

typedef int	t_bool;

#endif
