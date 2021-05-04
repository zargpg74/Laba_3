#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#include"Input.h"



struct Numbers
{
	int* number_one;
	int* number_two;
} N;



void main()
{
	system("cls");

	N.number_one = NULL;
	N.number_two = NULL;

	printf("Select input option:\n1) from console\n2) from file\n3) main arguments ");
	printf("\nYour option: ");
	int input_option;
	scanf_s("%d", &input_option);

	switch (input_option)
	{
	case 1:
		input_console(N.number_one, N.number_two);
	}
}