#include <iostream>
//Create a function with return type of integer. The function will take in two arguments.
//The first argument is a pointer to an array and the second is the size of the array.
//The function will return the sum of the two largest values in the array.

int LargestValues(int *arr[], int size)
{
	int Largest = *arr[0];
	int SecondLargest = *arr[0];
	for (int i = 0; i < size, i++;)
	{
		if (*arr[i] > Largest)
		{
			Largest = *arr[i];
		}
	}
	for (int in = 0; in < size, in++;)
	{
		if (*arr[in] > SecondLargest && *arr[in] < Largest)
		{
			SecondLargest = *arr[in];
		}
	}
	return Largest + SecondLargest;
}

int main()
{
	int arrays[] = { 1,2,3,4 };
	int values = LargestValues(arrays, 4);
}