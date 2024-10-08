/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 02:10:03 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/11 02:10:53 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_strchr(char *str);
char	*ft_substr(char *salma, int start, int len);
int		ft_strlen(char *s);
char	*ft_strdup(char *c);
char	*ft_strjoin(char *s1, char *s2);
char	*dialy(char *str, int c);
char	*afterline(char *str, char v);

#endif