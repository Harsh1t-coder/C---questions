#include<iostream>
using namespace std;

int main(){
    int row,col;
    row = 5,col=5;
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}