#include <iostream>
using namespace std;
int kthSmallest(int arr[], int N, int K)
{
    
    sort(arr);
    return arr[K - 1];
}

void sort(int arr[]){
    int n=arr.size();
    for (int i =0 ;i<n-1;++i){

    }

}
int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int N = sizeof(arr) / sizeof(arr[0]), K = 2;

    cout << "K'th smallest element is "
         << kthSmallest(arr, N, K);
    return 0;
}