/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:47:44 by jaqribei          #+#    #+#             */
/*   Updated: 2023/07/17 19:10:29 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	index;
	int	*range;
	int	len;

	if (min < max)
	{
		len = max - min;
		range = (int *) malloc (len * sizeof(int));
		index = 0;
		while (min < max)
		{
			range[index] = min;
			index++;
			min++;
		}
		return (range);
	}
	else
		return (NULL);
}
