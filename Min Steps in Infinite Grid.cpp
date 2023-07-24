/*Min Steps in Infinite Grid
You are in an infinite 2D grid where you can move in any of the 8 directions

 (x,y) to 
    (x-1, y-1), 
    (x-1, y)  , 
    (x-1, y+1), 
    (x  , y-1),
    (x  , y+1), 
    (x+1, y-1), 
    (x+1, y)  , 
    (x+1, y+1) 
You are given a sequence of points and the order in which you need to cover the points.. Give the minimum number of steps in which you can achieve it. You start from the first point.
*/

#include <iostream>
#include <vector>
using namespace std;
int minStep(vector<int>&A,vector<int>&B){
    int minSteps=0;
    int n=A.size();
    for(int i=1;i<n;i++){
        int x1=A[i-1];
        int y1=B[i-1];
        int x2=A[i];
        int y2=B[i];

        int dx=abs(x2-x1);
        int dy=abs(y2-y1);

        minSteps+=max(dx,dy);
    }
    return minSteps;
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    vector<int> A(n);
    vector<int> B(n);
    for(int i=0;i<n;i++){
        cin>>A[i]>>B[i]; 
    }
    int result=minStep(A,B);
    cout<<"Minimum no. of steps= "<<result<<endl;
    return 0;
}