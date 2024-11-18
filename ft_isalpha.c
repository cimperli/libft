/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caimperl <caimperl@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:55:55 by caimperl          #+#    #+#             */
/*   Updated: 2024/11/18 14:24:21 by caimperl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
// #include <ctype.h>

int ft_isalpha(int c)
{
	if((c>= 'A' && c<='Z') || (c>='a' && c<='z'))
		return 1;
	return 0;
}
// int main()
// {
//     printf("ft_isalpha('-2'): %d\n", ft_isalpha(-2));  // 1
//     printf("ft_isalpha('z'): %d\n", ft_isalpha('z'));  // 1
//     printf("ft_isalpha('1'): %d\n", ft_isalpha('1'));  // 0
//     printf("ft_isalpha('@'): %d\n", ft_isalpha('@'));  // 0

// 	 printf("isalpha('-2'): %d\n", isalpha(-2));  // 1
//     printf("isalpha('z'): %d\n", isalpha('z'));  // 1
//     printf("isalpha('1'): %d\n", isalpha('1'));  // 0
//     printf("isalpha('@'): %d\n", isalpha('@'));  // 0
//     return 0;
// }