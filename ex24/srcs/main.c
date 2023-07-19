/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:53:16 by jaqribei          #+#    #+#             */
/*   Updated: 2023/07/19 13:53:31 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	main(void)
{
	int	a;
	int	b;
	char	*str;
	char	*str1;

	a = 3;
	b = 1;

	str = "Blackpink";
	str1 = "In Your Area";
	
		ft_putchar('\n');
		ft_putstr(str);
		ft_putchar('\n');
		ft_strlen(str);
		ft_putchar('\n');
		ft_strcmp(str1, str1);
		ft_putchar('\n');
		ft_swap(&a, &b);
}
