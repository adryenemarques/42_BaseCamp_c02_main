/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admarque <admarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:22:30 by admarque          #+#    #+#             */
/*   Updated: 2022/04/22 19:43:47 by admarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] !='\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int main(void)
{
	char firstWord[]="gato";
	char lastWord[]="casa";
	printf("%s\n",ft_strncpy(firstWord,lastWord,3));
}