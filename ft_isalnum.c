/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caimperl <caimperl@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:42:50 by caimperl          #+#    #+#             */
/*   Updated: 2024/11/23 12:35:16 by caimperl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isalnum(int c)
{
    int is_alpha;
    int is_digit;

    is_alpha = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
    is_digit = (c >= '0' && c <= '9');
    if (is_alpha || is_digit)
        return (1);
    return (0);
}
// int main() {
//     char c;

//     // Test 1:
//     c = 'A';
//     printf("Il carattere '%c' è %salfanumerico.\n", c, ft_isalnum(c) ? "" : "non ");

//     // Test 2:
//     c = '3';
//     printf("Il carattere '%c' è %salfanumerico.\n", c, ft_isalnum(c) ? "" : "non ");

//     // Test 3:
//     c = '@';
//     printf("Il carattere '%c' è %salfanumerico.\n", c, ft_isalnum(c) ? "" : "non ");

//     // Test 4:
//     c = 'z';
//     printf("Il carattere '%c' è %salfanumerico.\n", c, ft_isalnum(c) ? "" : "non ");

//     return 0;
// }