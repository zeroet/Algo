/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2798.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <seyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 21:27:20 by seyun             #+#    #+#             */
/*   Updated: 2021/01/08 14:04:46 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>

int	isnum(char *str)
{
	while (*str)
	{
		if (47 < *str && *str < 58)
			str++;
		else
			return (0);
	}
	return (1);
}

int main(int ac, char *av[])
{
	int index;
	int sum;
	char *res;
	size_t i;

	if (ac != 3)
		return (0);
	if (2 != (isnum(av[1]) + isnum(av[2])))
			return (0);
	index = atoi(av[1]);
	sum = atoi(av[2]);
	i = 1;
	if (!(res = (char*)malloc(index + 1)))
		return (0);
	bzero(res, 1);
	while (i < sum)
	{
		if (
