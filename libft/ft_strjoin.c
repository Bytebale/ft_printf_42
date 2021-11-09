/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:03:10 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/13 16:03:28 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	stot_len;
	char	*tmp;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1_len = ft_strlen((char *) s1);
	s2_len = ft_strlen((char *) s2);
	stot_len = s1_len + s2_len + 1;
	tmp = malloc(sizeof(char) * stot_len);
	if (!tmp)
		return (0);
	ft_memmove(tmp, s1, s1_len);
	ft_memmove(tmp + s1_len, s2, s2_len);
	tmp[stot_len - 1] = '\0';
	return (tmp);
}
