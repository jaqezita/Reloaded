/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:05:49 by jaqribei          #+#    #+#             */
/*   Updated: 2023/07/17 18:39:27 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src);

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	dest = (char *) malloc ((ft_strlen(src) + 1) * (sizeof(char)));
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}
