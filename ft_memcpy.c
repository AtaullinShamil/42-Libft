/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:44:01 by ntojamur          #+#    #+#             */
/*   Updated: 2022/06/02 16:56:00 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ds;
	char	*sr;

	ds = (char *)dst;
	sr = (char *)src;
	if (!dst && !src)
		return (dst);
	while (n--)
		*ds++ = *sr++;
	return (dst);
}
