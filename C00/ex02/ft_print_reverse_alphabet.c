/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bela_de_oliveira <bela_de_oliveira@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:39:54 by bela_de_oli       #+#    #+#             */
/*   Updated: 2024/09/29 17:47:15 by bela_de_oli      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;
	letter = 'z';

	while (letter >= 'a')
	{write(1, &letter, 1);
	letter--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return (0);
}*/
