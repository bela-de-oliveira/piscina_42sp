/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bela_de_oliveira <bela_de_oliveira@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:19:10 by bela_de_oli       #+#    #+#             */
/*   Updated: 2024/09/29 19:11:49 by bela_de_oli      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comb_3numb(char n1, char n2, char n3)
{
	write(1,&n1,1);
	write(1,&n2,1);
	write(1,&n3,1);

	if(n1 != '7' || n2 != '8' || n3 != '9')
	{
		write(1,", ",2);
	}
}

void	ft_print_comb(void)
{
	char	n1, n2, n3;

	n1 = '0';
	while(n1 <= '7')
	{
		n2 = n1 +1;
		while(n2 <= '8')
		{
			n3 = n2 +1;
			while(n3 <= '9')
			{
				comb_3numb(n1,n2,n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

/*int	main()
{
	ft_print_comb();
	return(0);
}*/
