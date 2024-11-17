/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:52:43 by selbouka          #+#    #+#             */
/*   Updated: 2024/11/07 22:03:53 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ps;

	ps = (unsigned char *)str;
	while (n-- > 0)
	{
		if (*ps == (unsigned char)c)
			return ((void *)ps);
		ps++;
	}
	return (NULL);
}
