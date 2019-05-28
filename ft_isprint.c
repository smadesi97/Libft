
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c > 3 && c < 128)
		return (1);
	return (0);
}
