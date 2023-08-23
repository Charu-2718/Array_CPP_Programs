#include<iostream>
using namespace std;
void createArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
}
int peakArray(int arr[], int n) {
    int peak;
    int str = 0, end = n - 1;
    int mid = str + (end - str) / 2;
    while (str <= end) {
        if (arr[mid - 1] <= arr[mid] && arr[mid] >= arr[mid + 1]) {
            peak = arr[mid];
            break; 
        } else if (arr[mid - 1] < arr[mid]) {
            str = mid + 1;
        } else if (arr[mid] > arr[mid + 1]) {
            end = mid - 1;
        }
        mid = str + (end - str) / 2;
    }
    return peak;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    createArray(arr,n);
    cout<<peakArray(arr,n);
}