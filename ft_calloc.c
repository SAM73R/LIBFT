/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:42:05 by selbouka          #+#    #+#             */
/*   Updated: 2024/11/15 16:50:35 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (size && n && (n * size) / size != n)
		return (NULL);
	p = malloc(n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}
