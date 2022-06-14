/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:33:42 by ntojamur          #+#    #+#             */
/*   Updated: 2022/06/01 22:59:47 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;
	t_list	*to_del;

	if (!lst || !(*lst) || !del)
		return ;
	l = *lst;
	while (l)
	{
		to_del = l;
		l = l->next;
		del(to_del->content);
		free(to_del);
	}
	(*lst) = NULL;
}
