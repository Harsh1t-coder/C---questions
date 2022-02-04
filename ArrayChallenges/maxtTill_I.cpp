#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={0,-9,1,3,-4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxO=INT_MIN;
    for (int i = 0; i < n; i++){
        if(maxO<arr[i])
        maxO=arr[i];
        cout<<"Max no. at i:"<<i<<" is "<<maxO<<endl;
    }
    
}