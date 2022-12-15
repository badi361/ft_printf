/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:45:46 by bguzel            #+#    #+#             */
/*   Updated: 2022/11/20 16:23:40 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_string(char *str, int *count)
{
	if (!str)
	{
		*count += (write (1, "(null)", 6));
		return ;
	}
	*count += write (1, str, ft_strlen(str));
}
