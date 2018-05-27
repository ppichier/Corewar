/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_is_format.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cepalle <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 09:51:26 by cepalle      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 14:19:54 by cepalle     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	is_flags(char c)
{
	return (c == '0' || c == '#' || c == ' ' || c == '-' || c == '+');
}

char	is_num(char c)
{
	return (c <= '9' && c >= '0');
}

char	is_lenght(char c)
{
	return (c == 'h' || c == 'l' || c == 'j' || c == 'z');
}