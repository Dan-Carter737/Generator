#include <iostream>
using namespace std;

using std::cout;
void GenFn(int arr[], const int n);
void Print(int arr[], const int n);

int const n = 5;
int arr[n];

void main() 
{
	setlocale(LC_ALL, "");
	cout << "Сгенерированные числа \"5 из 36\"" << endl << endl;
	GenFn(arr, n);
	Print(arr, n);
}

void GenFn(int arr[], const int n) 
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 36;
}
}

void Print(int arr[], const int n) 
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	
}