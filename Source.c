#include <stdio.h>

int N;

int main()
{
	inputN();
	t5();
}

int inputN()
{
	puts("\nInput a natural number: ");
	
	scanf("%d", &N);

	if (getchar() != '\n')
	{
		//сообщение об ошибке
		printf("error\n");

		freeBuffer();

		inputN(); // Повторяем ввод заново
	}

	checkN();
}

// Очистка буфера ввода
int freeBuffer()
{
	if (getchar() != '\n')
	{
		freeBuffer();
	}
	
	return 0;
}

int checkN()
{
	if (N <= 0)
	{
		puts("wrong number");
		inputN();
	}
}

//вывести число задом наперед
int t5()
{
	if (N > 9)
	{
		printf("%d ", N % 10);
		N /= 10;

		t5();
	}
	else
	{
		printf("%d\n", N);
		return 0;
	}
}
