#include "3-calc.h"

/**
 * main - 
 * @argc:
 * @argv:
 * Return:
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}