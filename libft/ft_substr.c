/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:18:45 by dimedina          #+#    #+#             */
/*   Updated: 2023/07/08 14:04:29 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*str_ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	else if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	s += start;
	str_ptr = ret;
	*(ret + len) = '\0';
	while (len-- && *s)
		*ret++ = *s++;
	return (str_ptr);
}
