/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admarque <admarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:43:57 by admarque          #+#    #+#             */
/*   Updated: 2022/04/22 18:38:55 by admarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_alpha(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'z' && str[i] >= 'a')
			|| (str[i] <= 'Z' && str[i] >= 'A'))
				i++;
		else
			return (0);
	}
	return (1);
}
int main(void)
{
	char name[]="b";
	printf("%d\n",ft_str_is_alpha(name));
	return(0);
}