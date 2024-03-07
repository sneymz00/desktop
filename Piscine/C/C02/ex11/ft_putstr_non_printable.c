/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 01:27:51 by camurill          #+#    #+#             */
/*   Updated: 2023/12/13 00:05:11 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char h)
{
	write(1, &h, 1);
}

void	ft_hexa(int m)
{
	char	*t;

	t = "0123456789abcdef";
	if (m <= 0)
		m += 256;
	if (m >= 16)
	{
		ft_putchar(t[m / 16]);
		ft_putchar(t[m % 16]);
	}
	else
	{
		write(1, "0", 1);
		ft_putchar(t[m]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return ;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			write(1, "\\", 1);
			ft_hexa(str[i]);
		}
		i++;
	}
}
