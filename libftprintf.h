/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <galambey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:52:13 by galambey          #+#    #+#             */
/*   Updated: 2023/05/29 17:07:29 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft.h"
# include <stdio.h>

//int ft_printf(const char *s, ...);
char	**ft_split_mode(char *s, char c);
int ft_c_wd(char *s, char c);

#endif