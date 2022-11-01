/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:10:56 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/02 19:46:31 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_aux;

	if (!lst)
		return ;
	lst_aux = lst;
	while (lst_aux)
	{
		(*f)(lst_aux->content);
		lst_aux = lst_aux->next;
	}
	return ;
}
