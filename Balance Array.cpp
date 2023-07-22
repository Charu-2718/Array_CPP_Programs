/*Given an integer array A of size N. You need to count the number of special elements in the given array.

A element is special if removal of that element make the array balanced.

Array will be balanced if sum of even index element equal to sum of odd index element.*/


#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int SpecialElement( vector<int>& A){
    int n=A.size();
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenSum += A[i];
        } else {
            oddSum += A[i];
        }
    }

    int specialElement = 0;
    int currentEvenSum = 0;
    int currentOddSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
           
            if (currentEvenSum + (oddSum - currentOddSum) == currentOddSum + (evenSum - currentEvenSum - A[i])) {
                specialElement++;
            }
            currentEvenSum += A[i];
        } else {
            
            if (currentEvenSum + (oddSum - currentOddSum - A[i]) == currentOddSum + (evenSum - currentEvenSum)) {
                specialElement++;
            }
            currentOddSum += A[i];
        }
    }

    return specialElement;
    
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
    
    int result=SpecialElement(A);
    cout<<"Answer is: "<<result;
    return 0;
}