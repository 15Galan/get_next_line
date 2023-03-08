/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:58:34 by antgalan          #+#    #+#             */
/*   Updated: 2023/03/08 23:27:01 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32

# endif

/**
 * @brief   Reads from a file descriptor, reading BUFFER_SIZE bytes at a time
 *          until a newline is found, or the end of the file is reached.
 *
 * @param fd	File descriptor to read from.
 *
 * @return  Pointer to a string containing a line read from the file;
 *          NULL if there is nothing else to read or an error occurred.
 */
char	*get_next_line(int fd);

#endif
