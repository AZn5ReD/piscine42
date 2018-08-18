/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:03:57 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/18 23:00:24 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE02_H
# define COLLE02_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nb);
char		*ft_strcat(char *dest, char *src);
char		*ft_strdup(char *src);
char		*ft_strcpy(char *dest, char *src);
int			ft_largeur(char *str);
int			ft_hauteur(char *str);
char		*ft_read();
char		*colle0(int x, int y);
char		*colle1(int x, int y);
char		*colle2(int x, int y);
char		*colle3(int x, int y);
char		*colle4(int x, int y);
void		ft_compare_colle();
void		ft_print_res(int colle, int flag, int largeur, int hauteur);

typedef char *(*t_ptr)(int, int);

static f_ptr g_ftab[] =
{
	&colle0,
	&colle1,
	&colle2,
	&colle3,
	&colle4
};

#endif
