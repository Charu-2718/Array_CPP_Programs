
#include <iostream>
using namespace std;

void createArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
}

void insertionSort(int arr[], int n)
{
    int key;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        

        for(int j = i-1 ;j >= 0;  j--) {
            if (arr[j] > key){
                arr[j + 1] = arr[j];

            }
            else{
                break;
            }
            
           
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}

int main()
{
	int N;
    cin>>N;
    int arr[N];
    createArray(arr,N);
	insertionSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}
