#include<iostream>
using namespace std;

int main(){
int row,col;
row = col =4;
for (int i = 1; i <= row; i++){
    for(int j=1;j<=col;j++){
        if(i==1 || j==1 || j==col ||  i==row)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}

return 0;
}