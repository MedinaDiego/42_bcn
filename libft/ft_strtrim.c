/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:39:36 by dimedina          #+#    #+#             */
/*   Updated: 2023/07/08 17:03:41 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getstart(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_getend(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*newstr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1 + start, end - start + 1);
	return (newstr);
}
