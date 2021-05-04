#include<stdio.h>

#include"Operations.h"

void Summ(int* number_one, int* number_two, int len_number_one, int len_number_two)
{
	for (int i = 0; i < len_number_one; i++)
	{
		printf("%d", number_one[i]);
	}
	printf("\n");
	for (int i = 0; i < len_number_two; i++)
	{
		printf("%d", number_two[i]);
	}
}