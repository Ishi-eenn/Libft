/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:10:59 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/19 12:44:33 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

void	get_words(char *str, char *charset, int *word_count)
{
	int		in_word;
	char	*tmp;

	in_word = 0;
	while (*str)
	{
		tmp = charset;
		while (*tmp != '\0')
		{
			if (*str == *tmp)
			{
				if (in_word && (*word_count)++ != 0)
					in_word = 0;
				break ;
			}
			tmp++;
		}
		if (*tmp == '\0')
			in_word = 1;
		str++;
	}
	if (in_word)
		(*word_count)++;
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	word_len;

	word_len = 0;
	while (str[word_len] && !is_charset(str[word_len], charset))
		word_len++;
	return (word_len);
}

char	*assign_words(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (ft_strlen_sep(str, charset) + 1));
	while (i < ft_strlen_sep(str, charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		word_count;
	char	**array;
	int		i;

	i = 0;
	word_count = 0;
	array = NULL;
	get_words(str, charset, &word_count);
	array = malloc(sizeof(char *) * (word_count + 1));
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str)
		{
			array[i] = assign_words(str, charset);
			i++;
		}
		while (*str && !is_charset(*str, charset))
			str++;
	}
	array[i] = 0;
	return (array);
}

// #include <stdio.h>

// int    main(void)
// {
//     char    *str;
//     char    *charset;
//     char    **ans;

//     str = "_hello__+__world__+__japan__+__42__+__42Tokyo";
//     charset = "+_";
//     ans = ft_split(str, charset);
//     printf("0: %s\n", ans[0]);
//     printf("1: %s\n", ans[1]);
//     printf("2: %s\n", ans[2]);
//     printf("3: %s\n", ans[3]);
//     printf("4: %s\n", ans[4]);
// 	printf("5: %s\n", ans[5]);
// }
