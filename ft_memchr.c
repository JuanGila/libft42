/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgilaber <jgilaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 21:42:14 by jgilaber          #+#    #+#             */
/*   Updated: 2026/06/01 21:35:27 by jgilaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr_optimizado_probar(const void *s, int c, size_t n)
{//verificar porque no se comprueba -> if (!s || !c || !n)
	size_t			index;
	unsigned char	ptr_c;
	unsigned char	*ptr_s;

	index = 0;
	ptr_c = (unsigned char)c;
	ptr_s = (unsigned char *)s;
	while (ptr_s[index] != ptr_c && index < n)
		index++;
	if (ptr_s[index] == ptr_c)
		return (ptr_s + index);
	else
		return (NULL);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	ptr_c;
	unsigned char	*ptr_s;

	index = 0;
	ptr_c = (unsigned char)c;
	ptr_s = (unsigned char *)s;
	while (index < n)
	{
		if (ptr_s[index] == ptr_c)
			return (ptr_s + index);
		index++;
	}
	return (NULL);
}
/*
int main() {
	char data[] = "hola mundo";
	char *p = memchr(data, 'm', 10);
	if (p != NULL) printf("Encontrado: %s\n", p);
	else printf("No encontrado\n");
	return (0);
}
*/