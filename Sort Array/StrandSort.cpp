#include<iostream>
using namespace std;
void createArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
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
	printArray(arr, n);

	return (0);
}
