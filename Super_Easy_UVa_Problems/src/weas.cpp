#include <cstdio>

void sumInt()
{
	int TC, a, b;
	printf("%s", "enter the # test_cases: ");
	scanf_s("%d", &TC);
	while (TC--) {
		printf("%s", "enter two numbers (separated by space): ");
		scanf_s("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}

void sum()
{
	int a, b;

	while (scanf_s("%d %d", &a, &b), (a || b))
	{
		printf("%d\n", a + b);
	}
}

void sumVariant()
{
	int a, b;

	while (scanf_s("%d %d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}
}