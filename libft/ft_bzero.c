/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:29:56 by dimedina          #+#    #+#             */
/*   Updated: 2023/05/18 16:59:07 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void*ptr, unsigned int num)
{
	unsigned char	*p;
	unsigned int	i;	

	p = (unsigned char *) ptr;
	i = 0;
	while (i < num)
	{
		*p++ = 0;
		i++;
	}
}
