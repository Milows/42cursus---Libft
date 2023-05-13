/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micabrer <micabrer@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:38:54 by micabrer          #+#    #+#             */
/*   Updated: 2023/05/13 13:59:54 by micabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**/
static int count_words(const char *s, char c)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			word_count++;
		while (*s && *s != c)
			s++;
	}
	return (word_count);
}
char	**ft_split(char const *s, char c)
{

}

int	main(void)
{
	printf("%i", count_words("holita, que tal", ' '));
	return (0);
}