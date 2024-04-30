#include <stdio.h>

unsigned int N = 0;
int i = 0;
int avg = 0;
float res = 0;

int main()
{
	run();
}

int inputN()
{
	puts("\nInput a natural number: ");
	scanf("%u", &N);
	checkN();
}

int checkN()
{
	if (N <= 0)
	{
		puts("wrong number");
		inputN();
	}
}

int run()
{
	inputN();

	avg = 0;
	res = 0;
	i = 0;

	if (N % 10 != 0)
	{
		puts("number should end with 0");
		run();
	}
	else
	{
		N /= 10;
	}
	printf("\n");
	task13();

	run();
}

int task13()
{
	if (N)
	{
		avg += N % 10;
		N /= 10;
		i++;
		task13();
	}
	else
	{
		res = (float)avg / (float)i;
		printf("%.2f\n", res);
		return 0;
	}
}