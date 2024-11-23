/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caimperl <caimperl@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:28:15 by caimperl          #+#    #+#             */
/*   Updated: 2024/11/23 12:35:34 by caimperl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include "libft.h"

int ft_isdigit (int c)
{
	if((c >= '0' ) && (c <= '9'))
		return 1;
	return 0;
}

// int main() {
//     printf("%d\n", ft_isdigit('3'));  // Dovrebbe stampare 1 (vero)
//     printf("%d\n", ft_isdigit('a'));  // Dovrebbe stampare 0 (falso)
//     printf("%d\n", ft_isdigit('9'));  // Dovrebbe stampare 1 (vero)
//     printf("%d\n", ft_isdigit('!'));  // Dovrebbe stampare 0 (falso)
    
//     return 0;
// }