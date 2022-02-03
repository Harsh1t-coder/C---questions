#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int rowNo=1;rowNo<=n;rowNo++){
        for (int colNo = 1,k=1; colNo<=n+1-rowNo; colNo++){
            cout<<colNo<<" ";
        }
        cout<<endl;
    }   
}