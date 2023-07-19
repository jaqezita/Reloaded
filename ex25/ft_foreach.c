/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:56:09 by jaqribei          #+#    #+#             */
/*   Updated: 2023/07/19 19:21:31 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_print_recursive(int number);
void	ft_negative(int number);

void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int	index;

	index = 0;
	while (index < lenght)
	{
		f(tab[index]);
		index++;
	}
}

int	main(void)
{
	int	tab[8] = {80, 20, 100, 0, 5, 0, 15, 9};

	ft_foreach(tab, 8, &ft_putnbr);
	return (0);
}



void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_print_recursive(int number);
void	ft_negative(int number);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_recursive(int number)
{
	char	charnumber;

	if (number / 10 == 0)
	{
		charnumber = (number % 10) + '0';
		ft_putchar(charnumber);
		return ;
	}
	ft_print_recursive(number / 10);
	charnumber = (number % 10) + '0';
	ft_putchar(charnumber);
}

void	ft_is_negative(int number)
{
	if (number < 0)
	{
		ft_putchar('-');
		if (number == -2147483648)
		{
			ft_putchar(50);
			number = number + 2000000000;
		}
		number *= -1;
		ft_print_recursive(number);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_is_negative(nb);
	else
		ft_print_recursive(nb);
	ft_putchar('\n');
}
