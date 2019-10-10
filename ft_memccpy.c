#include <string.h>
#include <stdio.h>
#include <string.h>

//void *memccpy(void *dest, const void *src, int c, size_t n)

int main()
{
	char a[] = "01234";
	char b[] = "abcde";
	printf("%s\n", (char *)memccpy(a, b, 49, 3));
	printf("memccpy():%s\n", a);

	return (0);
}
