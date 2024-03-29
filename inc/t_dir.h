/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_dir.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:14:50 by tdelabro          #+#    #+#             */
/*   Updated: 2019/06/17 19:27:35 by tdelabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_DIR_H
# define T_DIR_H

# include "libft.h"
# include "ft_ls.h"
# include "ft_printf.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include <string.h>

void	ft_initial_list(t_list **lst, t_dir dir,\
			const unsigned int options);

#endif
