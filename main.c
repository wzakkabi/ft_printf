
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void testv(char *a, ...)
{
	va_list tst;

	va_start(tst, a);
	printf("%s\n", a);
	for (int i = 0; i < 2; i++)
	{
		a = va_arg(tst, char *);
		printf("%s\n", a);
	}

}

int main()
{
	testv("hello","walid", "test");
	return 0;
}