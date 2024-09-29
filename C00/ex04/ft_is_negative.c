/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bela_de_oliveira <bela_de_oliveira@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:58:16 by bela_de_oli       #+#    #+#             */
/*   Updated: 2024/09/29 18:04:21 by bela_de_oli      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
/*int	main(void)
{
	ft_is_negative(42);
	ft_is_negative(-42);
	ft_is_negative(0);
	return(0);
}*/
