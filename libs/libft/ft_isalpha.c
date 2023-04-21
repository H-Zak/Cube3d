/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 02:08:04 by zhamdouc          #+#    #+#             */
/*   Updated: 2022/05/20 11:53:25 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((64 < c && c < 91) || (96 < c && c < 123))
		return (102);
	else
		return (0);
}
/*
int	main()
{
	int	a = 96;

	printf("%d", isalpha(a));
	return (0);
}*/
