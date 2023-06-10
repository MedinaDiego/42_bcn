/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:04:58 by dimedina          #+#    #+#             */
/*   Updated: 2023/06/09 08:59:06 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int num)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	i = 0;
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (!dest && !src)
		return (0);
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
