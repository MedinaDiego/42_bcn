/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 08:14:34 by dimedina          #+#    #+#             */
/*   Updated: 2023/05/31 08:38:25 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int num)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	i = 0;
	if (d < s)
	{
		while (i < num)
		{
			*d++ = *s++;
			i++;
		}
	}
	else if (d > s)
	{
		i = num;
		while (i > 0)
		{
			d[i - 1] = s[i -1];
			i--;
		}
	}
	return (dest);
}
