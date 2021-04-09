/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:32:46 by yoelguer          #+#    #+#             */
/*   Updated: 2019/04/16 07:57:49 by yoelguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *p_s1;
	unsigned char *p_s2;

	p_s1 = (unsigned char*)s1;
	p_s2 = (unsigned char*)s2;
	if (*p_s1 == '\0' && *p_s2 == '\0')
		return (0);
	if (*p_s1 == *p_s2 && *p_s1 != '\0' && *p_s2 != '\0')
		return (ft_strcmp((const char*)p_s1 + 1, (const char*)p_s2 + 1));
	if (*p_s1 != *p_s2)
		return (*p_s1 - *p_s2);
	else
		return (0);
}
