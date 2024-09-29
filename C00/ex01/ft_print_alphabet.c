/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bela_de_oliveira <bela_de_oliveira@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:21:56 by bela_de_oli       #+#    #+#             */
/*   Updated: 2024/09/29 17:53:27 by bela_de_oli      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;
	letter = 'a';

	while(letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return(0);
}*/
