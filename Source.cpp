#include"Function.h"
#include"fiil_rand.cpp"
#include"sort.cpp"
#include"print.cpp"
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
	cout << endl;
	char Crr[n];
	fill_ramd(Crr, n);
	print(Crr, n);
	cout << endl;
}