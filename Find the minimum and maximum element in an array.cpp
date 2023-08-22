//Find the minimum and maximum element in an array
#include<iostream>
#include<climits>
using namespace std;
void createArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int minArray(int arr[],int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if (arr[i]<mini)
            mini=min(mini,arr[i]);
            
        
    }
    return mini;
}
int maxArray(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]>maxi)
            maxi=max(maxi,arr[i]);
            
        
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    createArray(arr,n);
    cout<< "The maximum element is: "  <<maxArray(arr,n)<<endl;
    cout<< "The minimum element is: " <<minArray(arr,n)<<endl;
    return 0;
}