/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgilaber <jgilaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 21:38:08 by jgilaber          #+#    #+#             */
/*   Updated: 2026/06/01 21:38:08 by jgilaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	str_index;

	if (!s || !f)
		return ;
	str_index = 0;
	while (s[str_index])
	{
		f(str_index, s + str_index);
		str_index++;
	}
}
/* revisar porque lee memoria de donde no debe
    y porque solo convierte en 1 algunos elementos y otros no.
void *ft_lst_map_f(void *content)
{
    char *str;
    char *new_str;
    int i;

    if (!content)
        return (NULL);
    str = (char *)content;
    new_str = malloc(strlen(str) + 1);
    if (!new_str)
        return (NULL);
    i = 0;
    while (str[i])
    {
        new_str[i] = str[i] + 1;
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

int main(void) {
    char *string = malloc(sizeof(char) * 7);
    strcpy(string, "abcdef");
    ft_striteri(string, &ft_iteri);
    printf("ft_striteri -> %s\n", string);
    return (0);
}
*/