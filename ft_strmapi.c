/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:04:21 by selbouka          #+#    #+#             */
/*   Updated: 2024/11/15 17:27:14 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nstr;

	if (!s || !f)
		return (NULL);
	i = 0;
	nstr = malloc(ft_strlen(s) + 1);
	if (!nstr)
		return (NULL);
	while (s[i])
	{
		nstr[i] = f(i, s[i]);
		i++;
	}
	return (nstr[i] = '\0', nstr);
}
