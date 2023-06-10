/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:17:54 by dimedina          #+#    #+#             */
/*   Updated: 2023/05/30 15:29:21 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *ptr, int value, unsigned int num)
{
	const unsigned char	*p;
	unsigned char		val;
	unsigned int		i;

	p = (const unsigned char *) ptr;
	val = (unsigned char) value;
	i = 0;
	while (i < num)
	{
		if (*p == val)
		{
			return ((void *) p);
		}
		p++;
		i++;
	}
	return ((void *) 0);
}
