/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:14:31 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/11 13:05:45 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		c -= 32;
	return (c);
}

/*
int main(void)
{
	printf("%c\n", ft_toupper('5'));
	printf("%c\n", ft_toupper('t'));
	printf("%c\n", ft_toupper('D'));
	printf("%c\n", ft_toupper('$'));
	printf("%c\n", ft_toupper('@'));
	printf("%c\n", ft_toupper(')'));
	printf("%c\n", ft_toupper('\0'));
	printf("%c\n", ft_toupper(' '));
	printf("%c\n", ft_toupper('d'));
	printf("%c\n", ft_toupper('w'));
	printf("%c\n", ft_toupper('x'));
	return (0);
}
*/
