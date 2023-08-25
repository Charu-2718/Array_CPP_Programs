#include<iostream>
using namespace std;
void createArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minterm=i;
        for (int j = 1 + i ;j < n;++j) {
            if(arr[minterm]>arr[j]){
                minterm=j;

            }
        }
        swap(arr[minterm],arr[i]);

    }
   
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    createArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}