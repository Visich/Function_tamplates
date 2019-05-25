#include"Function.h"
void fill_ramd(char Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand();
	}
}