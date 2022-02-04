#include<bits/stdc++.h>
using namespace std;
int binarySearch(int key,int arr[],int i,int n){
    
    
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]>key)
        e=mid-1;
        else if(arr[mid]<key)
        s=mid+1;
        else if(arr[mid]==key)
        return 1;
    }
    return 0;
}
// time C: O(logn base 2)
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int key;
    cin>>key;
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = binarySearch(key,arr,0,n-1);
    if(x){
        cout<<"Founded";
    }
    else{
        cout<<"Not Founded";
    }
}