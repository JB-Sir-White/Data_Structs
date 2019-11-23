// Javier											// Bubble Sort for 1D-array							//Date: 07/16
#include <iostream>
#include <fstream>

using namespace std;

void readData(int Array[], int n)
{
	ifstream inputFile;
	inputFile.open("Numbers.txt");

	for (int i = 0; i < n; i++)
	{
		inputFile >> Array[i];
	}
}

void printFunction(int Array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n" << Array[i];
	}
}

void bubbleSort(int Array[], int n)
{

	for (int x = 0; x < n; x++)
	{
		for (int y = 0; y < (n - 1); y++)
		{

			if (Array[y] > Array[y + 1])
			{
				int temp = Array[y];

				Array[y] = Array[y + 1];

				Array[y + 1] = temp;
			}
		}
	}
}

int main()
{
	int size = 0;
	ifstream inputFile;

	cout << "Please enter the number of lines in your file :  ";
	cin >> size; // input number of lines in text file for array size
	cout << "\n\nThe number of elements in your array is: "<< (size - 1) << endl;
	
	int* arr; // Pointer for array
	arr = new int[size]; //dynamic allication of memory, and creating array with size of user input
	
	cout << "Number of elements in arr[] is "<< (size - 1) << endl;
	readData(arr, size);
	printFunction(arr, size);
	cout << endl;
	bubbleSort(arr, size);
	cout << endl;
	printFunction(arr, size);
	cout << "\n\n";

	system("pause");
	return 0;
}