/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:53:14 by ntojamur          #+#    #+#             */
/*   Updated: 2022/06/02 16:56:06 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ds;
	const char	*sr;

	ds = (char *)dst;
	sr = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (sr < ds)
	{
		while (len--)
			ds[len] = sr[len];
	}
	else
	{
		while (len--)
			*ds++ = *sr++;
	}
	return (dst);
}
