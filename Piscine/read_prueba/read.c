/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:32:53 by camurill          #+#    #+#             */
/*   Updated: 2023/12/10 15:22:33 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	char	cad[11]; //declaracion de variables y cadena
	int		lec;

	/*insertar fichero*/
	
	int file;

	file = open ("paco", O_RDONLY);

	/*Comprobacion*/

	if (file == 1)
	{
		write(1, "Error", 5);
		return (0);
	}

	/*Colocar el puntero de posicion
	 * Necesitaremos buscar el valor de origen en la biblioteca que nos han dado como ejemplo
	 * para ello debemos tener en cuenta nuestro argv[1] para leer */
	lseek(file, 400, SEEK_SET);

	/*Leer solo diez caracteres*/
	lec = read (file, cad, 10);
	close(file);
	cad[10] = 0;
	
	/*Mensaje*/
	write(1, "The strig is :", 15);
	write(1, &lec, 10);

	return (0);
}
