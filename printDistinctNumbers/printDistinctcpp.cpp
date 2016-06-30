//Raisa Meneses
//this program reads an int array and displays unique numbers in the array
#include<iostream>
using namespace std;
 
int main()
{
	int size; 
	cout << "enter array size: "; 
	cin >> size; 
	int* numbers = new int[size];

	int totalSize = 0; 
	for (int i = 0; i < size; i++)
	{
		cout << "enter an integer" << endl;
		int newNumber; 
		cin >> newNumber;

		bool seenValue = false; 

		for (int j = 0; j < totalSize; j++)
		{
			if (*(numbers + j) == newNumber)
			{
				seenValue = true;
				break;
			}
		}

		if (!seenValue)
		{
			*(numbers + totalSize) = newNumber;
			totalSize++;
		}
	}
	for (int i = 0; i < totalSize; i++)
		cout << *(numbers + i) << " ";

	return 0;

}

