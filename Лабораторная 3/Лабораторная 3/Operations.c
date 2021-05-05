#include<stdio.h>
#include<stdlib.h>

#include"Operations.h"

int revers_number(int* number, int len_number)
{
	int* revers_number = (int*)malloc(len_number * sizeof(int));
	for (int i = 0; i < len_number; i++)
	{
		revers_number[i] = number[len_number - 1 - i];
	}

	return(revers_number);
}

void Summ(int* number_one, int* number_two, int len_number_one, int len_number_two)
{
	int* addition_result = NULL;
	int* revers_number_one = (int*)malloc(len_number_one * sizeof(int));
	int* revers_number_two = (int*)malloc(len_number_two * sizeof(int));

	revers_number_one = revers_number(number_one, len_number_one);
	revers_number_two = revers_number(number_two, len_number_two);


}