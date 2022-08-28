/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverger <mverger@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:01:11 by mverger           #+#    #+#             */
/*   Updated: 2021/12/10 18:52:12 by mverger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int myfd = open("d", O_RDONLY);
	char *str = get_next_line(myfd);
	int i = 0;

	while (str != NULL)
	{
		printf("line %d = %s", i, str);
		free (str);
		str = get_next_line(myfd);
		i++;
	}
	free(str);
	close(myfd);
	return (0);
}