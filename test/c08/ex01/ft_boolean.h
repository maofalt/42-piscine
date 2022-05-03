/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:33:34 by motero            #+#    #+#             */
/*   Updated: 2022/02/17 16:00:54 by motero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum boul{
	true = 1,
	false = 0,
}	t_bool;

# define EVEN(nb) (nb % 2 == 0)
# define TRUE true
# define FALSE false
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I Have an odd number of arguments.\n"
# define SUCCESS 0

#endif
