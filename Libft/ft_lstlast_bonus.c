/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:03:53 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/02 06:47:28 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_aux;

	if (!lst)
		return (NULL);
	lst_aux = lst;
	while (lst_aux && lst_aux->next != NULL)
		lst_aux = lst_aux->next;
	return (lst_aux);
}
