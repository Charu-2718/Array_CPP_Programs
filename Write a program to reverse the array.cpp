//Write a program to reverse the array
#include<iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
	int str=0;
    int end=n-1;
    while (str <end){
        swap(arr[str],arr[end]);
        str++;
        end--;
    }
}	


void printArray(int arr[], int n)
{
for (int i = 0; i < n; i++)
cout << arr[i] << " ";

cout << endl;
}

int createArray(int arr[], int n){
    for (int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
    }

}

int main()
{
	int n;
    cin>>n;

    int arr[n] ;
	createArray(arr,n);
	reverseArray(arr,n);
	printArray(arr,n);
	return 0;
}
