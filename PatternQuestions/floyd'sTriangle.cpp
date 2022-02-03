#include<iostream>
using namespace std;

int main(){
    int row =5, col =5;
    for(int i=1,l=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<l<<" ";
            l++;
        }
        cout<<endl;
    }
}