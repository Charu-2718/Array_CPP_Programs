//a={1,2,3}
//b={2,3}
//ans=123+23=146
#include<iostream>
using namespace std;
void createArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cin>>n;
    
    int a[n];
    
    createArray(a,n);
    
    int a1=0;
    
    for(int i=0;i<n;i++){
        a1=a1*10+a[i];
    }
    

    int m;
    cin>>m;
    int b[m];
    createArray(b,m);
    int b1=0;
    for(int i=0;i<m;i++){
        b1=b1*10+b[i];
    }
    

    int ans=a1+b1;
    cout<<ans;
   
    return 0;
}
