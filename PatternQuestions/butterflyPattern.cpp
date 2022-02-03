#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for (int rowNo = 1; rowNo <= n; rowNo++){
        for(int colNo=1;colNo<=rowNo;colNo++){
            cout<<"* ";
        }

        for(int j=1;j<=2*n-2*rowNo;j++)
        cout<<"  ";
         for(int colNo=1;colNo<=rowNo;colNo++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //ulta
    for (int rowNo = n; rowNo >0; rowNo--){

        for (int colNo = 1; colNo <= rowNo; colNo++){
            cout<<"* ";
        }

        for (int j = 1; j <= 2*n-2*rowNo; j++){
            cout<<"  ";
        }
        

        for (int colNo = 1; colNo <= rowNo; colNo++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
   
}