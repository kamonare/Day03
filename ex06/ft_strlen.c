/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamonare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:20:33 by kamonare          #+#    #+#             */
/*   Updated: 2020/07/08 16:26:31 by kamonare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int strlen(char *str);
{
	int length;
	length = 0;
	while(str[length] != '\0')
	{
		length++;
	}	
	return(length);
}