#include"Function.h"
template<typename T>
void fill_ramd(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 1000;
		Arr[i] /= 100;
	}
}
