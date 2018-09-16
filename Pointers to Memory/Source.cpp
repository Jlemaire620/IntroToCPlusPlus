#include <iostream>


//Reverse the elements that ptr prints into 
void ReverseArray(int * ptr, int size)
{
	int *first;
	int *last;
	int temp;
    first = ptr;
	last = &ptr[size - 1];
	for (int i = 0; i < size; i++)
	{
        temp = *first;
	   *first = *last;
	    *last = temp;
	}
}


//6

//a
void RevString(char* array)
{
	char temp;
	char first;
	char last;
	first = 'a';
	last = 'y';
	temp = first;
	first = last;
	last = temp;
}

//b
int CountEven(int* array, int array_length)
{
	for (int i = 0; i < array_length; i++)
	{
		if (*array % 2 == 0)
		{
			array++;
		}
	}
	return 0;
}

//c
int Maximum(double* array, int array_size)
{
	if (array_size == 0)
	{
		return 0;
	}
	else
	{
		double* temp;
		double* ptr;
		temp = array; 
		ptr = temp + 1; 
		for (int i = 0; i < array_size; i++)
		{
			if (ptr > temp)
			{
				ptr++;
			}
		}
		return *temp;
	}
}

//d
bool Contains(char* array, char search_value)
{
	if (*array = search_value)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	//Use a pointer to initalize all values in numbs to a 1
	/*int numbs[6];
	int * ptr;
	ptr = numbs;
	ptr++;*/

	int nums[3] = { 2, 4, 6 };
	int * ptr_nums = &nums[0];
	ReverseArray(ptr_nums, 3);

	// numbs => 6,4,2
}
	