/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimedina <dimedina@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:02:32 by dimedina          #+#    #+#             */
/*   Updated: 2023/07/15 09:49:18 by dimedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int			ft_atoi(const char *str);
void		ft_bzero(void *ptr, unsigned int num);
void		*ft_calloc(unsigned int num_elements, unsigned int element_size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memchr(const void *ptr, int value, unsigned int num);
int			ft_memcmp(const void *ptr1, const void *ptr2, unsigned int num);
void		*ft_memcpy(void *dest, const void *src, unsigned int num);
void		*ft_memmove(void *dest, const void *src, unsigned int num);
void		*ft_memset(void *ptr, int value, unsigned int num);
char		*ft_strchr(const char *str, int c);
size_t		ft_strlen(const char *str);
char		*ft_strrchr(const char *str, int c);
char		*ft_strdup(const char *str);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_strncmp(const char *str1, const char *str2, unsigned int n);
size_t		ft_strlcpy(char *dest, const char *src, unsigned int size);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
#endif
