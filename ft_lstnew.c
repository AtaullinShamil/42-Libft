/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:18:46 by ntojamur          #+#    #+#             */
/*   Updated: 2022/06/01 22:20:40 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*begin_pointer;

	begin_pointer = (t_list *)malloc(sizeof(t_list));
	if (!begin_pointer)
		return (NULL);
	begin_pointer -> content = content;
	begin_pointer -> next = NULL;
	return (begin_pointer);
}
