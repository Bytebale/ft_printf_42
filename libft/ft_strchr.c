/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:34:22 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:34:23 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	*s1;

	index = 0;
	s1 = (char *)str;
	while (s1[index] != c && s1[index] != '\0')
	{
		index++;
	}
	if (s1[index] == c)
		return (&s1[index]);
	else
		return (0);
}
