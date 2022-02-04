//Find the minimum element in unsorted array and swap it with element at begining.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,7,1,3,0};
    int s = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < s-1; i++){
        for (int j = i+1; j < s; j++){
            if(arr[j]<arr[i])
            {
                int tmp = arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;
            }
        }
        
    }
    for (int i = 0; i < s; i++){
        cout<<arr[i]<<" ";
    }
    
    
}