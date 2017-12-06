#include <stdio.h>
#include <malloc.h>
#include <limits.h>

#include <stdint.h>

struct abc {
	int a;
	char c1;
	int b;
};

struct s4 {
	int64_t abc3;
	int32_t abc;
	int32_t abc1;
	int32_t abc2;
};

int main ()
{
	struct abc var1;
	struct abc *var2;
	struct s4 one;
	int *var3;
	printf("Size of one:: %lu\n", sizeof(one));
	printf("Size of var1:: %lu\n", sizeof(var1));
	printf("Size of int:: %lu\n", sizeof(int));
	var1.a = 10;
	printf("Size of var2:: %lu\n", sizeof(var2));
	var2 = (struct abc *)malloc(sizeof(struct abc));
	var2->c1 = 'a';
	printf("Size of var2:: %lu\n", sizeof(var2));
	printf("Size of var3:: %lu\n", sizeof(var3));
	printf("Word Size:: %d\n", __WORDSIZE);
	return 0;
}
