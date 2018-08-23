/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:08:17 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/22 16:08:32 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

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
