#include<iostream>
using namespace std;

int main(){
    int n=5;
    for (int i = 1; i <= n; i++){
        for(int j=5-i;j>0;j--)
        cout<<" ";
        for (int j = 1; j <=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}