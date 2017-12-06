#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main ()
{
	int a = 0x0000008;
	int *p;
	char *c = (char *)p;
	int8_t eight_bit;
	printf("int:: %lu\n", sizeof(a));
	printf("int8_t :: %lu\n", sizeof(eight_bit));
	printf("INT8_MAX:: %d\n", INT8_MAX);
	printf("INT8_MIN:: %d\n", INT8_MIN);
	printf("INT_MAX:: %d\n", INT_MAX);
	printf("INT_MIN:: %d\n", INT_MIN);
	p = &a;
	printf("Starting Address:: %p\n", p);
	printf("Value:: %d\n", *p);
	printf("Value:: %c\n", *c);

}
