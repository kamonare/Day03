/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamonare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:10:16 by kamonare          #+#    #+#             */
/*   Updated: 2020/07/16 13:17:36 by kamonare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strrev(char *str)
{
	int len;
	int i;
	char temp;

	len = 0;
	while(str[len])
	{
		len++;
	}

	i = 0; 
	while( i <= (len - 1))
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		len--;
		i++;
	}
	return(str);
}

