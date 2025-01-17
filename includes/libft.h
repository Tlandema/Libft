/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlandema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:04:57 by tlandema          #+#    #+#             */
/*   Updated: 2019/08/07 09:58:10 by tlandema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

# define BUFF_SIZE 1000

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char				*ft_str_join(char *str, char *str3);
int					get_next_line(const int fd, char **line);
char				ft_last_char(char *str);
int					ft_join_tab(char **final_tab, char **tmp_tab, int j);

int					get_next_line(const int fd, char **line);
void				ft_quicksort(int *tab, int low, int high);
int					ft_count_tab(char **tab);
int					ft_stristr(const char *haystack, const char *needle);
size_t				ft_strlen(const char *s);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strrev(char *str);

void				ft_putnstr(char const *s, int n);
void				ft_big_putnbr(long long int n);
long double			ft_recursive_power(long double nb, int power);
int					ft_str_is_digit(char *str);
char				*ft_strjoinfree(char *s1, char *s2);
char				*ft_strjoincut(char *str1, char *str2, int c);
char				*ft_strdup(const char *s1);
char				*ft_strndup(char *str, size_t n);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, \
					const char *needle, size_t len);

char				*ft_itoa_ubase(unsigned long long ul, char *base);
void				ft_ftoa(long double n, char *res, int afterpoint);
int					ft_atoi(const char *str);
long int			ft_atoli(const char *str);
char				*ft_itoa(int n);

int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);

int					ft_toupper(int c);
int					ft_tolower(int c);

char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putnbr_base(int n, char *str);
void				ft_print_tab(char **tab);

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_strtrim_char(char const *s, char c);
char				**ft_strsplit(char const *s, char c);
char				**ft_split_white(char *str);
void				ft_tabdel(int i, char ***tab);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));

int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *src, int c, size_t len);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);

t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstfind(t_list *lst, void *data);
t_list				*ft_lstnelem(t_list *lst, unsigned int n);
size_t				ft_lstlen(t_list *lst);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstapp(t_list **alst, t_list *lst);
void				ft_lstswap(t_list **begin, int n);
void				del_cont(void *content, size_t size);

#endif
