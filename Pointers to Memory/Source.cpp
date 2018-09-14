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

void RevString(char* array)
{
	
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
	