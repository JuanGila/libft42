/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgilaber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 05:05:56 by jgilaber          #+#    #+#             */
/*   Updated: 2026/02/12 05:05:58 by jgilaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat_optimizado_probar(char *dest, const char *src, size_t size)
{
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (ft_strlen(src) + size);
	ft_memcpy(dest + dest_len, src, size - dest_len - 1);
	dest[dest_len + (size - dest_len)] = '\0';
	return (dest_len + ft_strlen(src));
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	src_index;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	src_index = 0;
	if (size <= dest_len)
		return (src_len + size);
	while (src[src_index] && src_index < size - dest_len - 1)
	{
		dest[dest_len + src_index] = src[src_index];
		src_index++;
	}
	dest[dest_len + src_index] = '\0';
	return (dest_len + src_len);
}

/*
void ft_do_strlcat(char *test, char *dst, char *src, size_t size) {
	printf("%s -> %zu\n", test, ft_strlcat(dst, src, size));
	printf("dst_result -> %s", dst);
}

int	main(void) {
	char	dst[10] = "Init";
	// Test1 -> Devuelve ¿?
	ft_do_strlcat("Test1", dst, "VeryLongString", 10);
	return (0);
}
*/