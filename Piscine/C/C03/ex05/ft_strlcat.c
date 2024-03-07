/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:44:15 by camurill          #+#    #+#             */
/*   Updated: 2023/12/13 13:30:36 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *run)
{
	int	n;

	n = 0;
	while (*run != '\0')
	{
		run++;
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	m;
	unsigned int	s;

	m = ft_strlen(dest);
	s = ft_strlen(src);
	i = 0;
	if (size <= m)
		return (size + s);
	while (*dest != '\0' && i < size -1)
	{
		dest++;
		i++;
	}
	while (*src != '0' && i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (m + s);
}
