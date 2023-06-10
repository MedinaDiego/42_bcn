/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 08:38:33 by dimedina          #+#    #+#             */
/*   Updated: 2023/05/31 09:00:42 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	unsigned char	*p;
	unsigned char	val;
	unsigned int	i;

	p = (unsigned char *) ptr;
	val = (unsigned char) value;
	i = 0;
	while (i < num)
	{
		*p++ = val;
		i++;
	}
	return (ptr);
}
