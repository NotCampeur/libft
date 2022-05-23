/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:34:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2022/05/23 14:17:40 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_files.h"
#include "libft_tabs.h"

char	**ft_get_file(char *path)
{
	char	**result;
	int		fd;
	char	*line;

	result = NULL;
	fd = open(path, O_RDONLY);
	if (fd < 3)
		return (NULL);
	line = NULL;
	while (get_next_line(fd, &line) > 0)
	{
		if (line == NULL)
			line = ft_strdup("");
		ft_add_to_tab((void *)line, (void ***)&result);
	}
	ft_add_to_tab((void *)line, (void ***)&result);
	close(fd);
	return (result);
}
