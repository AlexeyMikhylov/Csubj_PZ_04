#include <stdio.h>

unsigned int N;
int d;

int main()
{
	run();
}

int inputN()
{
	puts("\nInput a natural umber: ");
	scanf("%u", &N);
}

int run()
{
	int number;

	puts("\nInput task number: ");
	scanf("%d", &number);

	switch (number)
	{
	case 5:
		inputN();
		printf("\n");
		task5();
		break;
	case 6:
		inputN();
		printf("\n");
		task6();
		break;
	case 7:
		d = 2;
		inputN();
		printf("\n");
		task7();
		break;
	case 0:
		puts("exit");
		return 0;
	default:
		puts("wrong number");
		break;
	}

	run();
}

//вывести число задом наперед
int task5()
{
	if (N > 9)
	{
		printf("%d ", N % 10);
		N /= 10;

		task5();
	}
	else
	{
		printf("%d\n", N);
		return 0;
	}
}

//Вывести число по цифрам
int task6()
{
	int digit = N % 10;
	N = N / 10;

	if (N > 0) {
		task6();
	}

	printf("%d ", digit);
}

//проверка на простоту
//есть какой-то лимит на рекурсию, где-то до 3500-4000 вызовов, потом выкидывает (error: stack overflow)
int task7()
{
	if ((N % d) == 0)
	{
		printf("NO\n(difficult number)\n");
		return 1;
	}
	else
	{
		if (d < N - 1)
		{
			d++;
			task7();
		}
		else
		{
			printf("YES\n(prime number)\n");
			return 0;
		}
	}
}

int task13()
{

}