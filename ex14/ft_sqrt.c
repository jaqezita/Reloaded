/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:49:11 by jaqribei          #+#    #+#             */
/*   Updated: 2023/07/15 09:32:30 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt <= 46340)
	{
		if (sqrt * sqrt < nb)
			sqrt++;
		else if (sqrt * sqrt == nb)
			return (sqrt);
		else
			return (0);
	}
	return (0);
}
