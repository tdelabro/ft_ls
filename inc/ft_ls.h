/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:55:11 by tdelabro          #+#    #+#             */
/*   Updated: 2019/05/27 21:25:56 by tdelabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H

# define FT_LS_H

# include "libft.h"

typedef struct	s_dir
{
	char			*name;
	char			*full;
	struct stat		*fstat;
	struct passwd	*owner;
	struct group	*group;
}				t_dir;


#endif
