/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:02:33 by dimedina          #+#    #+#             */
/*   Updated: 2023/05/30 10:37:57 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int num_elements, unsigned int element_size)
{
	unsigned int	total_size;
	void			*ptr;
	unsigned int	i;
	unsigned char	*byte_ptr;

	total_size = num_elements * element_size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		i = 0;
		byte_ptr = (unsigned char *) ptr;
		while (i < total_size)
		{
			byte_ptr[i] = 0;
			i++;
		}
	}
	return (ptr);
}
