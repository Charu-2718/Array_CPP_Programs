//Brick Sort
#include<iostream>
using namespace std;
void createArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
}
void oddEvenSort(int arr[], int n)
{
	bool isSorted = false; 

	while (!isSorted)
	{
		isSorted = true;

		for (int i=1; i<=n-2; i=i+2)
		{
			if (arr[i] > arr[i+1])
			{
				swap(arr[i], arr[i+1]);
				isSorted = false;
			}
		}
        for (int i=0; i<=n-2; i=i+2)
		{
			if (arr[i] > arr[i+1])
			{
				swap(arr[i], arr[i+1]);
				isSorted = false;
			}
		}
	}

	return;
}

void printArray(int arr[], int n)
{
for (int i=0; i < n; i++)
	cout << arr[i] << " ";
cout << "\n";
}
int main()
{
	int n;
    cin>>n;
    int arr[n];
    createArray(arr,n);
	oddEvenSort(arr, n);
	printArray(arr, n);

	return (0);
}
