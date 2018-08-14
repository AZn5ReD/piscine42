/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:42:58 by jchirk            #+#    #+#             */
/*   Updated: 2018/08/10 16:02:35 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_end_hour(int end_hour)
{
	if (end_hour < 12)
	{
		printf("%d.00", (end_hour == 0) ? 12 : end_hour);
		printf(" A.M");
	}
	else
	{
		printf("%d.00", (end_hour - 12 == 0) ? 12 : end_hour - 12);
		printf(" P.M");
	}
	printf("\n");
}

void		ft_takes_place(int hour)
{
	int end_hour;

	end_hour = hour + 1;
	if (hour >= 24)
		hour -= 24;
	if (end_hour >= 24)
		end_hour -= 24;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 12)
	{
		printf("%d.00", (hour == 0) ? 12 : hour);
		printf(" A.M");
	}
	else
	{
		printf("%d.00", (hour - 12 == 0) ? 12 : hour - 12);
		printf(" P.M");
	}
	printf(" AND ");
	ft_end_hour(end_hour);
}
