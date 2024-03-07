/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:07:27 by camurill          #+#    #+#             */
/*   Updated: 2023/12/05 20:55:25 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	char	*pt;
	int		a;

	pt = str;
	a = 0;
	while (*str != '\0')
	{
		if (((*str >= 'a' && *str <= 'z') && a == 0))
		{
			*str -= 32;
			a++;
		}
		else if ((*str >= 'A' && *str <= 'Z') && (a == 1))
		{
			*str += 32;
			a = 1;
		}
		else if (*str >= 32 && *str <= 47)
			a = 0;
		else if ((*str >= 48 && *str <= 57) || (*str >= 'A' && *str <= 'Z'))
			a = 1;
		str++;
	}
	return (pt);
}
