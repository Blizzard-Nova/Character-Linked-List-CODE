#include <iostream>
using namespace std;
int main()
{

	/*int x;
	x = 5;
	int* ptr = NULL;
	ptr = &x;
	cout << x << endl;
	cout << *ptr << endl;
	*ptr = 45;
	cout << *ptr << endl;
	cout << x << endl;*/

	/*int* ptr = new int;
	*ptr = 10;
	cout << *ptr << endl;*/

	/*int* ptr = new int;
	cin >> *ptr;
	cout << endl;
	cout << *ptr << endl;*/

	/*int* arr = new int[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i;
		cin >> arr[i];
	}
	cout << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << arr[j] << endl;
	}*/

	/*int row = 4;
	int col = 5;
	int** arr = new int*[row];
	for (int i = 0; i < row; ++i)
	{
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cin >> arr[i][j];
		}
		cout << "----" << endl;
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << endl;
		}

	}*/

	/*int* ptr = new int;
	cin >> *ptr;
	cout << *ptr << endl;
	cout << ptr << endl;
	delete ptr;
	ptr = NULL;*/
	
	/*int* arr = new int[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i;
	}
	for (int j = 0; j < 5; j++)
	{
		cout << arr[j];
	}
	cout << endl;
	delete []arr;*/

	int row =0;
	int column = 0;
	cout << "Enter number of rows \n";
	cin >> row;
	cout << "Enter number of columns \n";
	cin >> column;
	cout << "Enter values \n";
	int** arr = new int* [row];
	for (int i = 0; i < row; ++i)
	{
		arr[i] = new int[column];
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cin >> arr[i][j];
		}
		cout << "---------" << endl;
	}
	
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cout<<"   " << arr[i][j]<<"   ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < row; ++i)
	{
		delete[] arr[i];
		
	}
	delete[] arr;
	return 0;

}