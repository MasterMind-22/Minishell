/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonadry <yonadry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:52:52 by moudrib           #+#    #+#             */
/*   Updated: 2023/03/27 17:32:39 by yonadry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	check_first(char *input)
{
	int	i;

	i = 0;
	char tmp[2];
	while (input[i])
	{
		if (ft_strchr(">|<", input[i]) && (i == 0 || i == 1))
		{
			if (ft_strcmp("<<", memcpy(tmp, input, 2)) == 0)
				break;
			ft_putstr("syntax error!\n");
			free(input);
			break;
		}
		i++;
	}
	check_quotes(input);
}

void	check_quotes(char *input)
{
	int	i;
	int	boool;

	i = 0;
	boool = 0;
	while (input[i])
	{
		if (input[i] == '\"' || input[i] == '\'')
			boool += 1;
		i++;
	}
	if (boool%2 != 0)
	{
		free(input);
		ft_putstr("syntax error!\n");
		return;
	}

}