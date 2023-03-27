/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonadry <yonadry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:01:56 by moudrib           #+#    #+#             */
/*   Updated: 2023/03/27 17:19:57 by yonadry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int ft_strchr(char *str, int find)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(str);
	while (i <= j)
	{
		if (str[i] == (char) find)
			return (1);
		i++;
	}
	return (0);
}