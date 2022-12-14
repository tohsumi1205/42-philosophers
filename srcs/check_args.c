/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:27:42 by tohsumi           #+#    #+#             */
/*   Updated: 2022/10/10 18:48:10 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philosophers.h>

int	check_args(int argc, char **argv)
{
	if (argc != 5 && argc != 6)
	{
		printf("%s\n", USEERR);
		return (1);
	}
	if (ft_atoi(argv[1]) < 0 || ft_atoi(argv[2]) < 0 \
			|| ft_atoi(argv[3]) < 0 || ft_atoi(argv[4]) < 0)
	{
		printf("%s\n", USEERR);
		return (1);
	}
	if (argc == 6 && ft_atoi(argv[5]) < 0)
	{
		printf("%s\n", USEERR);
		return (1);
	}
	return (0);
}
