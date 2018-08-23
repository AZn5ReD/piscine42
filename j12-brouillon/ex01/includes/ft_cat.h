/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 19:56:45 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/22 14:48:37 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <errno.h>
# include <stdio.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_display_file(char *path);
void		ft_print_files(int argc, char **argv);
#endif
