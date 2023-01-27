/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbordoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:27:13 by nbordoni          #+#    #+#             */
/*   Updated: 2022/11/19 15:27:18 by nbordoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *sbuff, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(sbuff, buffer);
	free(sbuff);
	return (temp);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*src;

	src = (void *)malloc(nmemb * size);
	if (!src)
		return (NULL);
	ft_bzero(src, nmemb);
	return (src);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		n;
	char		*dest;

	i = ((ft_strlen(s1)) + (ft_strlen(s2)));
	dest = malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < (ft_strlen(s1)))
	{
		dest[i] = s1[i];
		i++;
	}
	n = 0;
	while (n < ft_strlen(s2))
	{
		dest[i] = s2[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
