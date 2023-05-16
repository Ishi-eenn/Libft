#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*buff;
	size_t	i;

	buff = (char *)b;
	i = 0;
	while (i < len)
	{
		buff[i] = (char)c;
		i++;
	}
	return (b);
}
