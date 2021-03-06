/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:12:22 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/12 13:52:42 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	d;

	if (*s2 == '\0')
		return ((char *)s1);
	if (!*s1 || !*s2)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			d = 1;
			while (s2[d] != '\0' && s1[i + d] == s2[d])
				d++;
			if (s2[d] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (0);
}
