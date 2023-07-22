/*Given an integer array A of size N.

You have to pick exactly B elements from either left or right end of the array A to get the maximum sum.

Find and return this maximum possible sum.

NOTE: Suppose B = 4 and array A contains 10 elements then

You can pick the first four elements or can pick the last four elements or can pick 1 from the front and 3 from the back etc. you need to return the maximum possible sum of elements you can pick.
*/

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MaxSum( vector<int>& A,int B){
     int n1 = A.size();
    if (B >=n1) {
        
        int sum = 0;
        for (int num : A) {
            sum += num;
        }
        return sum;
    }

    int leftSum = 0;
    int rightSum = 0;

    
    for (int i = 0; i < B; ++i) {
        leftSum += A[i];
    }

    int maxSum = leftSum;


    for (int i = 0; i < B; ++i) {
        leftSum -= A[B - 1 - i]; 
        rightSum += A[n1 - 1 - i]; 
        maxSum = max(maxSum, leftSum + rightSum);
    }

    return maxSum;
    
}

int main(){
    int N,B;
    cout<<"Enter the size"<<endl;
    cin>>N; 
    vector<int> A(N);
    cout<<"Enter the array"<<endl;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    cout<<"Enter the size till which you want to calculate sum"<<endl;
    cin>>B;
    int result=MaxSum(A,B);
    cout<<"Maximum possible sum is: "<<result;
    return 0;
}

