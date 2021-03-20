/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 20:32:13 by charles           #+#    #+#             */
/*   Updated: 2021/03/19 09:21:02 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ftc(int *a)
{
    *a = 42;
}

int	main(int argc, char *argv[])
{

    if (argc == 2)
    {
        
    }

    int argc = "2";
    char argv[] = "Parametres passés au programme."

    char str[] = "Salut, c'est un test";
    char str10[10] = "0123456789";
    int QD = 42;
    unsigned int DCS = 256;
    long int QM = 9999999;
    fct(&QD);

    int tab[10];
    tab[0] = 42;
    *(tab + 1)= 42;
    *(ptr + 3) = 867;
    tab[9] = 0;

    char C;
    char *str;
    char *ptr;
    char str1[] = "Hello World !";

    C = '*';
    ptr = "toto";

    int tab2[10];
    int *tabptr[2];
    tabptr[0] = tab;
    tabptr[1] = tab2;
    trabptr[1][3] = 42;

    int a;
    int *ptr;
    int **ptr2;
    void *superptr;
    int a = 3;
    ptr = &a;
    ptr2 = &ptr2;
    superptr = &ptr2;
    *(superptr) = 0;
    ptr = superptr;

    ft_putsrt(str1);
    ft_putchar('\n');

    return (EXIT_SUCCESS);
    retun (0);
}
