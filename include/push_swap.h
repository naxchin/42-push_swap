/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachin <nachin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:15:52 by nachin            #+#    #+#             */
/*   Updated: 2021/09/10 23:10:34 by nachin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "toolbox.h"
# include "stack.h"
# include "struct.h"
# include "actions.h"
# include "sort.h"
# include "error.h"
# include "checker.h"
# include "free.h"
# include "lib.h"
# include "../get_next_line/get_next_line.h"
# define RED "\033[1;31m"
# define BLACK "\033[1;30m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define PURPLE "\033[1;35m"
# define CYAN "\033[1;36m"
# define WHITE "\033[1;37m"
# define NO_COLOR "\033[0m"

void	processing_push_swap_args(int argc, char **argv, t_node **stack, \
		int *total_nb);
int		sorting_stack(t_node **stack, int total_nb);

#endif
