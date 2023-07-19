/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:13:58 by jaqribei          #+#    #+#             */
/*   Updated: 2023/07/13 18:01:40 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		factorial = nb;
		while (nb > 1)
		{
			factorial = factorial * (nb - 1);
			nb--;
		}
		return (factorial);
	}
	else
		return (0);
}
