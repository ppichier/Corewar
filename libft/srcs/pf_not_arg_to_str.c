/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_not_arg_to_str.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cepalle <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 19:49:50 by cepalle      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 14:20:02 by cepalle     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*pf_not_arg_to_str(t_format *fm, va_list *ap)
{
	(void)fm;
	(void)ap;
	return (pf_strdup("%"));
}