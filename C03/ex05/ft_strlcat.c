/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:47:27 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/22 14:50:21 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (i < src_len && i < size - dest_len - 1)
	{
		dest[dest_len + 1] = src[i];
		i++;
	}
	dest[dest_len + 1] = '\0';
	return (dest_len + src_len);
}
