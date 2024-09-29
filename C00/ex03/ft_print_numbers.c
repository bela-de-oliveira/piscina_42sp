/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bela_de_oliveira <bela_de_oliveira@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:49:28 by bela_de_oli       #+#    #+#             */
/*   Updated: 2024/09/29 17:52:25 by bela_de_oli      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(void)
{
	char	num;
	num = '0';

	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}

int	main(void)
{
	ft_print_number();
	return(0);
}
