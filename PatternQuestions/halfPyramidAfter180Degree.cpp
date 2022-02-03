#include<iostream>
using namespace std;

/*
    *
   ** 
  ***
 ****
*****
*/
int main(){

    int row=5,col=5;
    for(int i=1; i<=row;i++){
        for(int j=1; j<=col;j++)
            if(j<=col-i)
                cout<<"  ";
            else{
                cout<<"* ";
            }
        cout<<endl;
    }
}