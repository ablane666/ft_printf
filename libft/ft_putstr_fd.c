/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:00:26 by ablane            #+#    #+#             */
/*   Updated: 2020/01/22 17:50:20 by ablane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int n;

	n = 0;
	if (!s)
		return ;
	while (s[n] != '\0')
		ft_putchar_fd(s[n++], fd);
}
