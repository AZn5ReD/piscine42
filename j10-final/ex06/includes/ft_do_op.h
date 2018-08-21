/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:17:42 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/15 18:56:44 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H
# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_op_fct
{
	char		*op;
	int			(*ft)(int, int, int *);
}				t_op_fct;

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
int				ft_op_plus(int a, int b, int *err);
int				ft_op_minus(int a, int b, int *err);
int				ft_op_multiply(int a, int b, int *err);
int				ft_op_divide(int a, int b, int *err);
int				ft_op_modulo(int a, int b, int *err);
int				ft_do_op(int argc, char **argv);

#endif
