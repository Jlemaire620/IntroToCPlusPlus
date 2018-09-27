//Create a function that returns the sum of the two largest values in an array.
int SumOfLargestValues(int size, int array[])
{
	int largestA = array[0];
	int largestB = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > largestA)
		{
			largestA = array[i];
		}
	}
	for (int in = 0; in < size; in++)
	{
		if (array[in] > largestB && array[in] < largestA)
		{
			largestB = array[in];
		}
		
	}
    return largestA + largestB;
}
int main()
{
	int abc[] = { 1,2,3,4,5 };
	int a = SumOfLargestValues(5, abc);
}
