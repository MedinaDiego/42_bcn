/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:09:26 by dimedina          #+#    #+#             */
/*   Updated: 2023/06/10 12:17:54 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(str);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str == 0)
		return (0);
	ft_strlcpy(new_str, str, len +1);
	return (new_str);
}
