#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
        cout<<"Founded";
        break;
        }
    }
   //O(N) worst case time complexity
}