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
#include <stdio.h>

/**/
static int	count_words(const char *s, char c)
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

char	*extract_words(const char *s, char c)
{
	char	*word;
	int		word_len;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (NULL);
	word[word_len] = '\0';
	while (word_len--)
		word[word_len] = s[word_len];
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_count;
	int		i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			split[i++] = extract_words(s, c);
		while (*s && *s != c)
			s++;
	}
	split[i] = NULL;
	return (split);
}
