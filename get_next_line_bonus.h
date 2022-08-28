/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverger <mverger@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:43:10 by mverger           #+#    #+#             */
/*   Updated: 2021/12/07 13:27:37 by mverger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

size_t	ft_strlen(const char *s);
int		ft_check_buffer(char *buffer);
int		ft_islinefeed(char *buffer);
char	*ft_strjoin(char *output_temp, char *buffer);
char	*copy_with_linefeed(char *buffer, char *output, int output_size);
char	*copy_without_linefeed(char *buffer, char *output, int temp_count);
char	*get_line(char *buffer, char *output, int read_output,
			char *output_temp);
char	*get_next_line(int fd);

#endif