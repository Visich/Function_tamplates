#include<iostream>
using namespace std;

template<typename T>
void fill_ramd(T Arr[], const int n);
void fill_ramd(char Arr[], const int n);
template<typename T>
void print(T Arr[], const int n);
template<typename T>
void sort(T Arr[], const int n);
void main()
{
	const int n = 5;
	int Arr[n];
	fill_ramd(Arr, n);
	print(Arr, n);
	sort(Arr, n);
	print(Arr, n);
	cout << endl;
	double Brr[n];
	fill_ramd(Brr, n);
	print(Brr, n);
	sort(Brr, n);
	print(Brr, n);

	char Crr[n];
	fill_ramd(Crr, n);
	print(Crr, n);
}
template<typename T>
void fill_ramd(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 1000;
		Arr[i] /= 100;
	}
}
void fill_ramd(char Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand();
	}
}

template<typename T>
void print(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
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