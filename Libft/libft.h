#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

typedef	s_listt
{
	void	*content;
	struct s_list	*next;
}	t_list;

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalunm(int c);
int	ft_isprint(int c);
int	ft_isascii(int c);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(const char *str);
int	ft_memcmp(const void *str1, const char *str2, size_t n);
void		*ft_memset(void *a, int c, size_t len);
void		*ft_memset(void *a, int c, size_t len);
void		ft_bzero(void *a, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t len);
void		*ft_memmove(void *dest, const void *src, size_t len);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		*ft_memchr(const void *str, int c, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t				ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t len);

#endif
