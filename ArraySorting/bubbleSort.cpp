//Reapetedly swap two adjacent elements if they are in wrong order
// we have to n-1 iterations to get sorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,3,1,10,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int counter = 1;
    while(counter<n){
        for (int i = 0; i <n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
}