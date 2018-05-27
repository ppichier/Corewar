/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   or.c                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cepalle <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/03 08:43:26 by cepalle      #+#   ##    ##    #+#       */
/*   Updated: 2018/05/03 08:43:28 by cepalle     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <corewar.h>

static int	op_or(int a, int b)
{
	return (a | b);
}

int			cmd_or(t_vm *vm, int ipr)
{
	return (do_op(vm, ipr, &op_or));
}