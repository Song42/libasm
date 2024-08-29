#ifndef LIBASM_H
# define LIBASM_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <sys/types.h>

size_t	ft_strlen(char *s);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strdup(const char *s);
ssize_t	ft_write(int fd, const void *buf, size_t c);
ssize_t	ft_read(int fd, void *buf, size_t c);
int	ft_strcmp(const char *s1, const char *s2);

#endif
