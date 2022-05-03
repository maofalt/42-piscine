/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_coord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 09:26:46 by motero            #+#    #+#             */
/*   Updated: 2022/02/23 09:54:56 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	new_coord(int *row, int *col, int *size)
{
	if ((*col - *size + 1) == -1)
    {
        if ((*row  - *size + 1) == -1)
		{
			*row = *size - 1;
			*col = *size - 1;
			return ;
		}
		else
		{
			*col = *size - 1;
			return ;
		}
    }
    else if ((*row - *size + 1) == -1)
	{
		*row = *size - 1;
		return ;
	}
    else
		return ;

	return ;
}
