#include <string.h>

void	*memset(void *s, int c, int n)
{
	while (n-- > 0)
	{
		*(char *)s++ = c;
	}
	return (s);
}

#include <stdio.h>

int main(void)
{
 char str[] = "train";
 ft_memset(str, 'i', 2);
 printf("%s\n", str);
 ft_memset(str+2, 'z', 3);
 printf("%s", str);
 return 0;
}

/*
	l9: return (s); はポインタが最後のメモリを指してるのでは？
	それをリターンしていいんだっけ？ return s memory.
*/