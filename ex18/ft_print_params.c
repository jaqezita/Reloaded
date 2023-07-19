/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:44:44 by jaqribei          #+#    #+#             */
/*   Updated: 2023/07/17 12:43:43 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	index;
	int	n;

	n = 1;
	if (argc > 0)
	{
		while (n < argc)
		{
			index = 0;
			while (argv[n][index] != '\0')
			{	
				ft_putchar(argv[n][index]);
				index++;
			}
			n++;
			ft_putchar('\n');
		}
	}
	return (0);
}
