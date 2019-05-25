#include"Function.h"
template<typename T>
void sort(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				T Buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = Buffer;
			}
		}
	}
}