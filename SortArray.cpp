//Write a program to sort the given array
#include<iostream>
using namespace std;
void createArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void sortArray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }

    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    createArray(arr,n);
    sortArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
