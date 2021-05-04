#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<locale.h>

struct Numbers
{
	int* number_one;
	int* number_two;
} N;

void main()
{
	system("cls");
	setlocale(0, "ru");

	N.number_one = NULL;
	N.number_two = NULL;

	int symbol;
	int len_number_one = 0;
	printf("Enter the firs number : ");
	symbol = getc(stdin);
	while (symbol != '\n')
	{
		N.number_one = (int*)realloc(N.number_one, (len_number_one + 1) * sizeof(int));
		N.number_one[len_number_one] = symbol-48;

		len_number_one++;

		symbol = getc(stdin);
	}

	int len_number_two = 0;
	symbol = getc(stdin);
	while (symbol != '\n')
	{
		N.number_two = (int*)realloc(N.number_two, (len_number_two + 1) * sizeof(int));
		N.number_two[len_number_two] = symbol - 48;

		len_number_two++;

		symbol = getc(stdin);
	}


	for (int i = 0; i < len_number_two; i++)
	{
		printf("%d", N.number_two[i]);
	}
}