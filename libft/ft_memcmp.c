/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:40:57 by dimedina          #+#    #+#             */
/*   Updated: 2023/05/30 15:48:03 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *ptr1, const void *ptr2, unsigned int num)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	unsigned int		i;

	p1 = (const unsigned char *) ptr1;
	p2 = (const unsigned char *) ptr2;
	i = 0;
	while (i < num)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
		i++;
	}
	return (0);
}
