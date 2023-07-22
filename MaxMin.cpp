/*Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

NOTE: You should make minimum number of comparisons.*/
#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int MaxMinSum( vector<int>& A){
    int n=A.size();
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        mini=min(mini,A[i]);
    }
    for(int i=0;i<n;i++){
        maxi=max(maxi,A[i]);
    }
    int sum=mini+maxi;
    return sum;
}
int main(){
    int N;
    cout<<"Enter the size"<<endl;
    cin>>N; 
    vector<int> A(N);
    cout<<"Enter the array"<<endl;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    
    int result=MaxMinSum(A);
    cout<<"Answer is: "<<result;
    return 0;
}