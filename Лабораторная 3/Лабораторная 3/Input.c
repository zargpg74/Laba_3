#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#include"Input.h"
#include"Operations.h"



void Error_Operation(char operation)
{
	if ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/'))
	{
		system("cls");
		printf("Error.\nIncorrect operation entered: %c!", operation);
		exit(1);
	}
}



void input_console(int *number_one, int*number_two)
{
	int symbol;
	int len_number_one = 0;
	system("cls");
	printf("You select input from the console\n");
	printf("Enter the firs number : ");
	symbol = getc(stdin);
	symbol = getc(stdin);
	while (symbol != '\n')
	{
		number_one = (int*)realloc(number_one, (len_number_one + 1) * sizeof(int));
		number_one[len_number_one] = symbol - 48;

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
		number_two = (int*)realloc(number_two, (len_number_two + 1) * sizeof(int));
		number_two[len_number_two] = symbol - 48;

		len_number_two++;

		symbol = getc(stdin);
	}


	switch (operation)
	{
	case 43:
		Summ(number_one, number_two, len_number_one, len_number_two);
		break;
	default:
		system("cls");
		printf("Error. No such operation exists!");
		exit(2);
	}
}