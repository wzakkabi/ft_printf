

#include "libftprintf.h"

int main()
{
	int x = 0;
	char p[] = "h";
	x = ft_printf("%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%", 'a',"walid", p, -4564848, -554, -4754, -459, -459);
	printf("\n%d --------------------------\n", x);
	x = 0;
	x = printf("%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%", 'a',"walid", p, -4564848, -554, -4754, -459, -459);
	printf("\n%d", x);
	return 0;
}