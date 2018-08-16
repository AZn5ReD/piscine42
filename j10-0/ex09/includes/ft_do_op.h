/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:00:31 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/16 14:02:27 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H
# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_opp
{
	char		*op;
	int			(*ft)(int, int, int *);
}				t_opp;

typedef	struct	s_ret_err
{
	int			ret;
	int			err;
}				t_ret_err;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);
int				ft_add(int a, int b, int *err);
int				ft_sub(int a, int b, int *err);
int				ft_mul(int a, int b, int *err);
int				ft_div(int a, int b, int *err);
int				ft_mod(int a, int b, int *err);
int				ft_usage(int a, int b, int *err);
int				ft_do_op(int argc, char **argv);

#endif
