/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basical_cardinal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:08:11 by motero            #+#    #+#             */
/*   Updated: 2022/02/20 20:21:30 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	basic_cardinal(char *str, char *path)
{
	char	*nbr ;
	char	*raw_dict;
	t_dict	*ulti_dict;

	nbr = ft_atoc(str);
	if (nbr == NULL)
		return ;
	raw_dict = or_dic(path);
	ulti_dict = parse_to_struc(raw_dict);
	free(raw_dict);
	if (ulti_dict != NULL)
	{
		struct_to_card(nbr, ulti_dict);
		dynamic_free(ulti_dict, 32);
	}
	free(nbr);
}
