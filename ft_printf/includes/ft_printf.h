/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:07:41 by hefurrer          #+#    #+#             */
/*   Updated: 2022/10/18 11:26:35 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_findform(va_list car, const char form);
int		ft_pchar(int c);
int		ft_ppercent(void);
int		ft_printnbr(int n);
void	ft_putstr(char *s);
int		ft_pstr(char *s);
int		ft_pnbr_unsigned(unsigned int nbr);
char	*ft_unsigneditoa(unsigned int nbr);
int		ft_nbrlenght(unsigned int nbr);
int		ft_padd(unsigned long long add);
void	ft_convadd(uintptr_t add);
int		ft_addlenght(uintptr_t add);
int		ft_hexabase(unsigned int nbr, const char form);
void	ft_printhex(unsigned int nbr, const char form);
int		ft_hexsize(unsigned int nbr);

#endif
