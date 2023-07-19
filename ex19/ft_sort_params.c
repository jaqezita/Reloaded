/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:51:47 by jaqribei          #+#    #+#             */
/*   Updated: 2023/07/18 18:25:41 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **a, char **b);
void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	int	pos1;
	int	pos2;

	pos1 = 1;
	while (pos1 < argc)
	{
		pos2 = 1;
		while (pos2 < argc)
		{
			if (ft_strcmp(argv[pos1], argv[pos2]) < 0)
			{
				ft_swap(&argv[pos1], &argv[pos2]);
			}
			pos2++;
		}
		pos1++;
	}
	pos1 = 1;
	while (pos1 < argc)
	{
		ft_putstr(argv[pos1]);
		ft_putchar('\n');
		pos1++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			break ;
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_swap(char **a, char **b)
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
