/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:32:20 by dimedina          #+#    #+#             */
/*   Updated: 2023/06/10 10:51:02 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str1, const char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] && str2[i] && (i < n - 1) && str1[i] == str2[i])
		i++;
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}
