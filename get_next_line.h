/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:58:34 by antgalan          #+#    #+#             */
/*   Updated: 2023/07/15 19:21:22 by antgalan         ###   ########.fr       */
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
 * @brief	Locates the first occurrence of a character in a string.
 * 			The null-terminating character is considered to be part of the
 * 			string; therefore if the character is '\0', the functions locate
 *          the terminating '\0'.
 * 
 * @param str	The string to be searched.
 * @param c		The character to be located.
 * 
 * @return	Pointer to the located character;
 * 			NULL if the character does not appear in the string.
 */
char	*ft_strchr(const char *str, int c);

/**
 * @brief	Allocates memory for a new string, which is the result of the
 * 			concatenation of 's1' and 's2'.
 * 
 * @param s1	The first string.
 * @param s2	The second string.
 * 
 * @return	Pointer to the new string.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief	Computes the length of the string 's'.
 * 
 * @param s		The string to compute the length of.
 * 
 * @return	The length of the string 's'.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief	Copies 'n' bytes from memory area 'src' to memory area 'dst'.
 * 			The memory areas must not overlap; use ft_memmove() if the memory
 * 			areas do overlap.
 * 
 * @param dst 	The destination memory area.
 * @param src 	The source memory area.
 * @param n 	The number of bytes to copy.
 * 
 * @return	Pointer to 'dst'.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief	Reads from a file descriptor, reading BUFFER_SIZE bytes at a time
 *			until a newline is found, or the end of the file is reached.
 *
 * @param fd	File descriptor to read from.
 *
 * @return	Pointer to a string containing a line read from the file;
 *			NULL if there is nothing else to read or an error occurred.
 */
char	*get_next_line(int fd);

/**
 * @brief	Deletes the first line from the given string.
 *
 * @param str	String to delete the first line from.
 *
 * @return	Pointer to the updated string.
 */
char	*delete_line(char *content);

/**
 * @brief	Reads a single line from the given string.
 *
 * @param str	String containing the content to read from.
 *
 * @return	Pointer to a string containing the line read from the content;
 *			NULL if there is nothing else to read.
 */
char	*get_one_line(char *content);

/**
 * @brief	Updates past readed content with actual readed content.
 *
 * @param str		String with past readed content.
 * @param buffer	String with actual readed content.
 *
 * @return	Pointer to the cleaned content stack.
 */
char	*update_readed(char *str, char *buffer);

#endif
