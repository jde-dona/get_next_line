#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*read_all(int fd, char *sbuff);
char	*ft_free(char *sbuff, char *buffer);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		n_search(char *buffer);
char	*ft_endl(char *buffer);
char	*del_line(char *buffer);
size_t	ft_strlen(const char *str);

#endif
