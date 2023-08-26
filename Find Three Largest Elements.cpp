// C++ program for find the largest
// three elements in an array
#include <iostream>
using namespace std;

// Function to print three largest elements
void print3largest(int arr[], int arr_size)
{
	int first, second, third;

	if (arr_size < 3)
	{
		cout << " Invalid Input ";
		return;
	}
 third = first = second = INT_MIN;
    for(int i = 0; i < arr_size; i++)
    {
         
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
 
        else if (arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
 
        else if (arr[i] > third && arr[i] != second && arr[i] != first)
            third = arr[i];
    }
 
        
    
	cout << "Three largest elements are "
		<< first << " " << second << " "
		<< third << endl;
}

int main()
{
	int arr[] = { 12, 13, 1, 10, 34, 11, 34 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	print3largest(arr, n);
	return 0;
}

// This code is contributed by Anjali_Chauhan
