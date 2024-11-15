#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	unsigned int    i;
	size_t  j;

	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < start)
		i++;
	j = 0;
	while (j < len)
	{
		sub[j++] = s[i++];
	}
	sub[j] = '\0';
	return (sub);
}
