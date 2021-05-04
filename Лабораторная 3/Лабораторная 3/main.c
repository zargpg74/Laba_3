#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#include"Operations.h"

struct Numbers
{
	int* number_one;
	int* number_two;
} N;



void Error_Operation(char operation)
{
	if ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/'))
	{
		system("cls");
		printf("Error.\nIncorrect operation entered: %c!", operation);
		exit(1);
	}
}



void main()
{
	system("cls");

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

	char operation;
	printf("Enter operation: ");
	scanf_s("%c", &operation);
	Error_Operation(operation);

	printf("Enter the second number: ");
	int len_number_two = 0;
	symbol = getc(stdin);
	symbol = getc(stdin);
	while (symbol != '\n')
	{
		N.number_two = (int*)realloc(N.number_two, (len_number_two + 1) * sizeof(int));
		N.number_two[len_number_two] = symbol - 48;

		len_number_two++;

		symbol = getc(stdin);
	}


	switch (operation)
	{
	case 43:
		Summ(N.number_one, N.number_two, len_number_one, len_number_two);
		break;
	default:
		system("cls");
		printf("Error. No such operation exists!");
		exit(2);
	}
}